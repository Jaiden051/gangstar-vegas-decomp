// Decompiled from classes.dex (SourceFile: ConnectionResult.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.common;

import com.google.android.gms.internal.hl;
public final class ConnectionResult {
    // Fields
    public static int a;
    public static int b;
    public static int c;
    public static int d;
    public static int e;
    public static int f;
    public static int g;
    public static int h;
    public static int i;
    public static int j;
    public static int k;
    public static int l;
    public static int m;
    public static int n;
    public static int o;
    public static int p;
    public static int q;
    public static int r;
    public static final com.google.android.gms.common.ConnectionResult s;
    private final android.app.PendingIntent t;
    private final int u;

    // Methods
    static
    {
      s = new com.google.android.gms.common.ConnectionResult(0, null);
    }

    public ConnectionResult(int p0, android.app.PendingIntent p1)
    {
      super();
      this.u = p0;
      this.t = p1;
    }

    private String e()
    {
      String v1;
      switch ( this.u )
      {
        case 0:
          v1 = "SUCCESS";
          break;
        case 1:
          v1 = "SERVICE_MISSING";
          break;
        case 2:
          v1 = "SERVICE_VERSION_UPDATE_REQUIRED";
          break;
        case 3:
          v1 = "SERVICE_DISABLED";
          break;
        case 4:
          v1 = "SIGN_IN_REQUIRED";
          break;
        case 5:
          v1 = "INVALID_ACCOUNT";
          break;
        case 6:
          v1 = "RESOLUTION_REQUIRED";
          break;
        case 7:
          v1 = "NETWORK_ERROR";
          break;
        case 8:
          v1 = "INTERNAL_ERROR";
          break;
        case 9:
          v1 = "SERVICE_INVALID";
          break;
        case 10:
          v1 = "DEVELOPER_ERROR";
          break;
        case 11:
          v1 = "LICENSE_CHECK_FAILED";
          break;
        case 13:
          v1 = "CANCELED";
          break;
        case 14:
          v1 = "TIMEOUT";
          break;
        case 15:
          v1 = "INTERRUPTED";
          break;
        default:
          v1 = "unknown status code " + this.u;
          break;
      }
      return v1;
    }

    public final void a(android.app.Activity p0, int p1)
 throws android.content.IntentSender.SendIntentException {
      if ( this.a() )
        p0.startIntentSenderForResult(this.t.getIntentSender(), p1, null, 0, 0, 0);
    }

    public final boolean a()
    {
      return this.u != 0 && this.t != null;
    }

    public final boolean b()
    {
      return this.u == 0;
    }

    public final int c()
    {
      return this.u;
    }

    public final android.app.PendingIntent d()
    {
      return this.t;
    }

    public final String toString()
    {
      com.google.android.gms.internal.hl$a v1;
      String v2;
      v1 = hl.e(this);
      switch ( this.u )
      {
        case 0:
          v2 = "SUCCESS";
          break;
        case 1:
          v2 = "SERVICE_MISSING";
          break;
        case 2:
          v2 = "SERVICE_VERSION_UPDATE_REQUIRED";
          break;
        case 3:
          v2 = "SERVICE_DISABLED";
          break;
        case 4:
          v2 = "SIGN_IN_REQUIRED";
          break;
        case 5:
          v2 = "INVALID_ACCOUNT";
          break;
        case 6:
          v2 = "RESOLUTION_REQUIRED";
          break;
        case 7:
          v2 = "NETWORK_ERROR";
          break;
        case 8:
          v2 = "INTERNAL_ERROR";
          break;
        case 9:
          v2 = "SERVICE_INVALID";
          break;
        case 10:
          v2 = "DEVELOPER_ERROR";
          break;
        case 11:
          v2 = "LICENSE_CHECK_FAILED";
          break;
        case 13:
          v2 = "CANCELED";
          break;
        case 14:
          v2 = "TIMEOUT";
          break;
        case 15:
          v2 = "INTERRUPTED";
          break;
        default:
          v2 = "unknown status code " + this.u;
          break;
      }
      return v1.a("statusCode", v2).a("resolution", this.t).toString();
    }

}
