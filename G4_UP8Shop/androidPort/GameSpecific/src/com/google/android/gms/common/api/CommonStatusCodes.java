// Decompiled from classes.dex (SourceFile: CommonStatusCodes.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.common.api;

public class CommonStatusCodes {
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

    // Methods
    public CommonStatusCodes()
    {
      super();
    }

    public static String getStatusCodeString(int p0)
    {
      String v1;
      switch ( p0 )
      {
        case -1:
          v1 = "SUCCESS_CACHE";
          break;
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
        case 3000:
          v1 = "AUTH_API_INVALID_CREDENTIALS";
          break;
        case 3001:
          v1 = "AUTH_API_ACCESS_FORBIDDEN";
          break;
        case 3002:
          v1 = "AUTH_API_CLIENT_ERROR";
          break;
        case 3003:
          v1 = "AUTH_API_SERVER_ERROR";
          break;
        case 3004:
          v1 = "AUTH_TOKEN_ERROR";
          break;
        case 3005:
          v1 = "AUTH_URL_RESOLUTION";
          break;
        default:
          v1 = "unknown status code: " + p0;
          break;
      }
      return v1;
    }

}
