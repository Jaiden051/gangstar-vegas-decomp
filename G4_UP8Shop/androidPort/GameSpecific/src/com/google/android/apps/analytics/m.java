// Decompiled from classes.dex (SourceFile: m.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.apps.analytics;

import android.util.Log;
import java.util.Collections;
final class m implements java.lang.Runnable {
    // Fields
    final com.google.android.apps.analytics.NetworkDispatcher$DispatcherThread a;
    private final java.util.LinkedList b;

    // Methods
    public m(
            com.google.android.apps.analytics.NetworkDispatcher$DispatcherThread p0,
            com.google.android.apps.analytics.i[] p1)
    {
      super();
      this.a = p0;
      this.b = new java.util.LinkedList();
      Collections.addAll(this.b, p1);
    
    }

    private void a(boolean p0)
 throws java.io.UnsupportedEncodingException, java.io.IOException, org.apache.http.HttpException {
      int i = 0;
      String v3 = null;
      int v4 = 0; // RETVAL
      int v5 = 0;
      String v6 = null;
      String v7 = null;
      org.apache.http.HttpEntityEnclosingRequest v8 = null;
      String HostName = null;
      StringBuffer v10 = null;
      org.apache.http.Header[] AllHeaders = null;
      int v12 = 0;
      int j = 0;
      org.apache.http.message.BasicHttpEntityEnclosingRequest v14 = null;
      int _pc = 0;
      _sm:
      while ( true )
      {
        switch ( _pc )
        {
          case 0:
            if ( GoogleAnalyticsTracker.getInstance().e() && p0 )
            Log.v("GoogleAnalyticsTracker", "dispatching hits in dry run mode");
            i = 0;
            _pc = 1;
            continue _sm;
          case 1:
            if ( !(i < this.b.size() && i < NetworkDispatcher$DispatcherThread.access$1000(this.a)) ) { _pc = 6; continue _sm; }
            v3 = Utils.addQueueTimeParameter(((com.google.android.apps.analytics.i)this.b.get(i)).a, System.currentTimeMillis());
            v4 = v3.indexOf(63);
            v5 = v4;
            if ( !(v4 < 0) ) { _pc = 3; continue _sm; }
            v6 = v3;
            _pc = 2;
            continue _sm;
          case 2:
            v7 = "";
            _pc = 4;
            continue _sm;
          case 3:
            if ( v4 <= 0 )
            v6 = "";
            else
            v6 = v3.substring(0, v4);
            if ( v5 >= v3.length() - 2 )
            { _pc = 2; continue _sm; }
            v7 = v3.substring(v5 + 1);
            _pc = 4;
            continue _sm;
          case 4:
            if ( v7.length() >= 2036 )
            {
            v14 = new org.apache.http.message.BasicHttpEntityEnclosingRequest("POST", "/p" + v6);
            v14.addHeader("Content-Length", Integer.toString(v7.length()));
            v14.addHeader("Content-Type", "text/plain");
            v14.setEntity(new org.apache.http.entity.StringEntity(v7));
            v8 = v14;
            }
            else
            {
            v8 = new org.apache.http.message.BasicHttpEntityEnclosingRequest("GET", v3);
            }
            HostName = NetworkDispatcher.access$200(NetworkDispatcher$DispatcherThread.access$700(this.a)).getHostName();
            if ( NetworkDispatcher.access$200(NetworkDispatcher$DispatcherThread.access$700(this.a)).getPort() != 80 )
            HostName = HostName
            + ":"
            + NetworkDispatcher.access$200(NetworkDispatcher$DispatcherThread.access$700(this.a)).getPort();
            v8.addHeader("Host", HostName);
            v8.addHeader("User-Agent", NetworkDispatcher$DispatcherThread.access$1100(this.a));
            if ( GoogleAnalyticsTracker.getInstance().e() )
            {
            v10 = new StringBuffer();
            AllHeaders = v8.getAllHeaders();
            v12 = AllHeaders.length;
            for ( j = 0; j < v12; ++j )
            v10.append(AllHeaders[j].toString()).append("\n");
            v10.append(v8.getRequestLine().toString()).append("\n");
            Log.i("GoogleAnalyticsTracker", v10.toString());
            }
            if ( v7.length() <= 0x2000 )
            {
            if ( p0 )
            NetworkDispatcher$DispatcherThread.access$1200(this.a).a();
            else
            NetworkDispatcher$DispatcherThread.access$800(this.a).a(v8);
            }
            else
            {
            Log.w("GoogleAnalyticsTracker", "Hit too long (> 8192 bytes)--not sent");
            NetworkDispatcher$DispatcherThread.access$1200(this.a).a();
            }
            _pc = 5;
            continue _sm;
          case 5:
            ++i;
            _pc = 1;
            continue _sm;
          case 6:
            if ( !p0 )
            NetworkDispatcher$DispatcherThread.access$800(this.a).a();
            return;
        }
      }
}

    public final com.google.android.apps.analytics.i a()
    {
      return (com.google.android.apps.analytics.i)this.b.poll();
    }

    public final void run()
    {
      int v1 = 0;
      long v2 = 0L;
      boolean v3 = false;
      int i = 0;
      String v5 = null;
      int v6 = 0; // RETVAL
      int v7 = 0;
      String v8 = null;
      String v9 = null;
      String v10 = null;
      org.apache.http.HttpEntityEnclosingRequest v11 = null;
      String HostName = null;
      StringBuffer v13 = null;
      org.apache.http.Header[] AllHeaders = null;
      int v15 = 0;
      int j = 0;
      Throwable v17 = null;
      org.apache.http.message.BasicHttpEntityEnclosingRequest v18 = null;
      Throwable v19 = null;
      Throwable v20 = null;
      int _ehCatchPc = -1;
      Throwable _ehEx = null;
      Throwable _ehCaught = null;
      int _pc = 0;
      _sm:
      while ( true )
      {
        try
        {
          switch ( _pc )
          {
            case 0:
              NetworkDispatcher$DispatcherThread.access$402(this.a, this);
              v1 = 0;
              _pc = 1;
              continue _sm;
            case 1:
              if ( v1 >= 5 || this.b.size() <= 0 )
              { _pc = 14; continue _sm; }
              v2 = 0;
              _ehEx = null;
              _ehCatchPc = 9;
              if ( NetworkDispatcher$DispatcherThread.access$500(this.a) == 500
              || NetworkDispatcher$DispatcherThread.access$500(this.a) == 503 )
              {
              v2 = (long)(Math.random() * (double)NetworkDispatcher$DispatcherThread.access$600(this.a));
              if ( NetworkDispatcher$DispatcherThread.access$600(this.a) < 256 )
              NetworkDispatcher$DispatcherThread.access$630(this.a, 2);
              }
              else
              {
              NetworkDispatcher$DispatcherThread.access$602(this.a, 2);
              }
              Thread.sleep(1000 * v2);
              v3 = NetworkDispatcher$DispatcherThread.access$700(this.a).b();
              if ( GoogleAnalyticsTracker.getInstance().e() && v3 )
              Log.v("GoogleAnalyticsTracker", "dispatching hits in dry run mode");
              i = 0;
              _pc = 2;
              continue _sm;
            case 2:
              if ( !(i < this.b.size() && i < NetworkDispatcher$DispatcherThread.access$1000(this.a)) ) { _pc = 7; continue _sm; }
              v5 = Utils.addQueueTimeParameter(
              ((com.google.android.apps.analytics.i)this.b.get(i)).a,
              System.currentTimeMillis());
              v6 = v5.indexOf(63);
              v7 = v6;
              if ( !(v6 < 0) ) { _pc = 4; continue _sm; }
              v8 = v5;
              _pc = 3;
              continue _sm;
            case 3:
              v9 = "";
              v10 = v8;
              _pc = 5;
              continue _sm;
            case 4:
              if ( v6 <= 0 )
              v8 = "";
              else
              v8 = v5.substring(0, v6);
              if ( v7 >= v5.length() - 2 )
              { _pc = 3; continue _sm; }
              v9 = v5.substring(v7 + 1);
              v10 = v8;
              _pc = 5;
              continue _sm;
            case 5:
              if ( v9.length() >= 2036 )
              {
              v18 = new org.apache.http.message.BasicHttpEntityEnclosingRequest("POST", "/p" + v10);
              v18.addHeader("Content-Length", Integer.toString(v9.length()));
              v18.addHeader("Content-Type", "text/plain");
              v18.setEntity(new org.apache.http.entity.StringEntity(v9));
              v11 = v18;
              }
              else
              {
              v11 = new org.apache.http.message.BasicHttpEntityEnclosingRequest("GET", v5);
              }
              HostName = NetworkDispatcher.access$200(NetworkDispatcher$DispatcherThread.access$700(this.a)).getHostName();
              if ( NetworkDispatcher.access$200(NetworkDispatcher$DispatcherThread.access$700(this.a)).getPort() != 80 )
              HostName = HostName
              + ":"
              + NetworkDispatcher.access$200(NetworkDispatcher$DispatcherThread.access$700(this.a)).getPort();
              v11.addHeader("Host", HostName);
              v11.addHeader("User-Agent", NetworkDispatcher$DispatcherThread.access$1100(this.a));
              if ( GoogleAnalyticsTracker.getInstance().e() )
              {
              v13 = new StringBuffer();
              AllHeaders = v11.getAllHeaders();
              v15 = AllHeaders.length;
              for ( j = 0; j < v15; ++j )
              v13.append(AllHeaders[j].toString()).append("\n");
              v13.append(v11.getRequestLine().toString()).append("\n");
              Log.i("GoogleAnalyticsTracker", v13.toString());
              }
              if ( v9.length() <= 0x2000 )
              {
              if ( v3 )
              NetworkDispatcher$DispatcherThread.access$1200(this.a).a();
              else
              NetworkDispatcher$DispatcherThread.access$800(this.a).a(v11);
              }
              else
              {
              Log.w("GoogleAnalyticsTracker", "Hit too long (> 8192 bytes)--not sent");
              NetworkDispatcher$DispatcherThread.access$1200(this.a).a();
              }
              _pc = 6;
              continue _sm;
            case 6:
              ++i;
              _pc = 2;
              continue _sm;
            case 7:
              if ( !v3 )
              NetworkDispatcher$DispatcherThread.access$800(this.a).a();
              ++v1;
              _pc = 1;
              continue _sm;
            case 9:
              _ehCatchPc = -1;
              if ( !((_ehEx != null && (_ehEx instanceof InterruptedException))) ) { _pc = 10; continue _sm; }
              _ehCaught = _ehEx; _ehEx = null;
              v17 = _ehCaught;
              Log.w("GoogleAnalyticsTracker", "Couldn't sleep.", v17);
              _pc = 14;
              continue _sm;
            case 10:
              if ( !((_ehEx != null && (_ehEx instanceof java.io.IOException))) ) { _pc = 11; continue _sm; }
              _ehCaught = _ehEx; _ehEx = null;
              v19 = _ehCaught;
              Log.w("GoogleAnalyticsTracker", "Problem with socket or streams.", v19);
              _pc = 14;
              continue _sm;
            case 11:
              if ( !((_ehEx != null && (_ehEx instanceof org.apache.http.HttpException))) ) { _pc = 12; continue _sm; }
              _ehCaught = _ehEx; _ehEx = null;
              v20 = _ehCaught;
              Log.w("GoogleAnalyticsTracker", "Problem with http streams.", v20);
              _pc = 12;
              continue _sm;
            case 12:
              if ( _ehEx != null ) { Throwable _tEx = _ehEx; _ehEx = null; throw com.gameloft.android.DecompRT.sneakyThrow(_tEx); }
              _pc = 13;
              continue _sm;
            case 13:
              _ehCatchPc = -1;
              _pc = 14;
              continue _sm;
            case 14:
              NetworkDispatcher$DispatcherThread.access$800(this.a).b();
              NetworkDispatcher$DispatcherThread.access$900(this.a).a();
              NetworkDispatcher$DispatcherThread.access$402(this.a, null);
              return;
          }
        }
        catch ( Throwable _ehT )
        {
          if ( _ehCatchPc >= 0 )
          {
            _ehEx = _ehT;
            _pc = _ehCatchPc;
            continue _sm;
          }
          throw com.gameloft.android.DecompRT.sneakyThrow(_ehT);
        }
      }
}

}
