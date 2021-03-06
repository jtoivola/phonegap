//#include <QtDBus>

#include <QtDebug>
#include <QWebFrame>
#include <QWebPage>

#include "utils.h"
#include "accelerometer.h"

// We need this global for C callback
static QWebView *gWebView = NULL;

DBusGProxy *dbus_proxy = NULL;
DBusGProxyCall *dbus_call = NULL;

Accelerometer::Accelerometer(QWebView *aWebView) : iWebView(aWebView)
{
#ifdef Q_WS_HILDON
    dbus_proxy = dbus_g_proxy_new_for_name_owner (
                                                dbus_g_bus_get (DBUS_BUS_SYSTEM, NULL),
                                                "com.nokia.mce",
                                                "/com/nokia/mce/request",
                                                "com.nokia.mce.request", NULL);
#endif
    gWebView = iWebView;
}
#ifdef Q_WS_HILDON
static void AccelerometerCallback(DBusGProxy *proxy, DBusGProxyCall *call, void *data)
{
  gchar *s1, *s2, *s3;
  gint x, y, z;
  gchar facing = 0;

  if (dbus_g_proxy_end_call (proxy, call, NULL,
                             G_TYPE_STRING, &s1,
                             G_TYPE_STRING, &s2,
                             G_TYPE_STRING, &s3,
                             G_TYPE_INT, &x,
                             G_TYPE_INT, &y,
                             G_TYPE_INT, &z,
                             G_TYPE_INVALID)) {

    g_free(s1); g_free(s2); g_free(s3);

    QString callback = QString("__PG_ACCELEROMETER_CALLBACK(%d,%d,%d);").arg(x).arg(y).arg(z);
    gWebView->page()->mainFrame()->evaluateJavaScript(callback);

  } else
  {
    qDebug ("Couldn't end the call!\n");
  }

  dbus_call = NULL;
}
#endif

void Accelerometer::get(){

    if( !dbus_proxy ){
        qDebug("No dbus_proxy");
        return;
    }

    if( !dbus_call ){
#ifdef Q_WS_HILDON
        dbus_call = dbus_g_proxy_begin_call (
                                         dbus_proxy,
                                         "get_device_orientation",
                                         AccelerometerCallback,
                                         NULL, NULL,
                                         G_TYPE_INVALID);
#endif
    }
}


