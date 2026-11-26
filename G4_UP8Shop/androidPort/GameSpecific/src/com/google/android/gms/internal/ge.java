// Decompiled from classes.dex (SourceFile: ge.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.internal;

public final class ge extends com.gameloft.android.DecompRT.EnumBase<ge> {
    // Fields
    public static final com.google.android.gms.internal.ge A;
    public static final com.google.android.gms.internal.ge B;
    public static final com.google.android.gms.internal.ge C;
    public static final com.google.android.gms.internal.ge D;
    public static final com.google.android.gms.internal.ge E;
    public static final com.google.android.gms.internal.ge F;
    public static final com.google.android.gms.internal.ge G;
    public static final com.google.android.gms.internal.ge H;
    public static final com.google.android.gms.internal.ge I;
    public static final com.google.android.gms.internal.ge J;
    public static final com.google.android.gms.internal.ge K;
    public static final com.google.android.gms.internal.ge L;
    public static java.lang.String M;
    public static java.lang.String N;
    private static final com.google.android.gms.internal.ge[] P;
    public static final com.google.android.gms.internal.ge a;
    public static final com.google.android.gms.internal.ge b;
    public static final com.google.android.gms.internal.ge c;
    public static final com.google.android.gms.internal.ge d;
    public static final com.google.android.gms.internal.ge e;
    public static final com.google.android.gms.internal.ge f;
    public static final com.google.android.gms.internal.ge g;
    public static final com.google.android.gms.internal.ge h;
    public static final com.google.android.gms.internal.ge i;
    public static final com.google.android.gms.internal.ge j;
    public static final com.google.android.gms.internal.ge k;
    public static final com.google.android.gms.internal.ge l;
    public static final com.google.android.gms.internal.ge m;
    public static final com.google.android.gms.internal.ge n;
    public static final com.google.android.gms.internal.ge o;
    public static final com.google.android.gms.internal.ge p;
    public static final com.google.android.gms.internal.ge q;
    public static final com.google.android.gms.internal.ge r;
    public static final com.google.android.gms.internal.ge s;
    public static final com.google.android.gms.internal.ge t;
    public static final com.google.android.gms.internal.ge u;
    public static final com.google.android.gms.internal.ge v;
    public static final com.google.android.gms.internal.ge w;
    public static final com.google.android.gms.internal.ge x;
    public static final com.google.android.gms.internal.ge y;
    public static final com.google.android.gms.internal.ge z;
    private final java.lang.String O;

    // Methods
    static
    {
      com.google.android.gms.internal.ge[] v0;
      a = new com.google.android.gms.internal.ge("SUCCESS", 0, "Ok");
      b = new com.google.android.gms.internal.ge("BAD_AUTHENTICATION", 1, "BadAuthentication");
      c = new com.google.android.gms.internal.ge("NEEDS_2F", 2, "InvalidSecondFactor");
      d = new com.google.android.gms.internal.ge("NOT_VERIFIED", 3, "NotVerified");
      e = new com.google.android.gms.internal.ge("TERMS_NOT_AGREED", 4, "TermsNotAgreed");
      f = new com.google.android.gms.internal.ge("UNKNOWN", 5, "Unknown");
      g = new com.google.android.gms.internal.ge("UNKNOWN_ERROR", 6, "UNKNOWN_ERR");
      h = new com.google.android.gms.internal.ge("ACCOUNT_DELETED", 7, "AccountDeleted");
      i = new com.google.android.gms.internal.ge("ACCOUNT_DISABLED", 8, "AccountDisabled");
      j = new com.google.android.gms.internal.ge("SERVICE_DISABLED", 9, "ServiceDisabled");
      k = new com.google.android.gms.internal.ge("SERVICE_UNAVAILABLE", 10, "ServiceUnavailable");
      l = new com.google.android.gms.internal.ge("CAPTCHA", 11, "CaptchaRequired");
      m = new com.google.android.gms.internal.ge("NETWORK_ERROR", 12, "NetworkError");
      n = new com.google.android.gms.internal.ge("USER_CANCEL", 13, "UserCancel");
      o = new com.google.android.gms.internal.ge("PERMISSION_DENIED", 14, "PermissionDenied");
      p = new com.google.android.gms.internal.ge("DEVICE_MANAGEMENT_REQUIRED", 15, "DeviceManagementRequiredOrSyncDisabled");
      q = new com.google.android.gms.internal.ge("CLIENT_LOGIN_DISABLED", 16, "ClientLoginDisabled");
      r = new com.google.android.gms.internal.ge("NEED_PERMISSION", 17, "NeedPermission");
      s = new com.google.android.gms.internal.ge("BAD_PASSWORD", 18, "WeakPassword");
      t = new com.google.android.gms.internal.ge("ALREADY_HAS_GMAIL", 19, "ALREADY_HAS_GMAIL");
      u = new com.google.android.gms.internal.ge("BAD_REQUEST", 20, "BadRequest");
      v = new com.google.android.gms.internal.ge("BAD_USERNAME", 21, "BadUsername");
      w = new com.google.android.gms.internal.ge("LOGIN_FAIL", 22, "LoginFail");
      x = new com.google.android.gms.internal.ge("NOT_LOGGED_IN", 23, "NotLoggedIn");
      y = new com.google.android.gms.internal.ge("NO_GMAIL", 24, "NoGmail");
      z = new com.google.android.gms.internal.ge("REQUEST_DENIED", 25, "RequestDenied");
      A = new com.google.android.gms.internal.ge("SERVER_ERROR", 26, "ServerError");
      B = new com.google.android.gms.internal.ge("USERNAME_UNAVAILABLE", 27, "UsernameUnavailable");
      C = new com.google.android.gms.internal.ge("DELETED_GMAIL", 28, "DeletedGmail");
      D = new com.google.android.gms.internal.ge("SOCKET_TIMEOUT", 29, "SocketTimeout");
      E = new com.google.android.gms.internal.ge("EXISTING_USERNAME", 30, "ExistingUsername");
      F = new com.google.android.gms.internal.ge("NEEDS_BROWSER", 31, "NeedsBrowser");
      G = new com.google.android.gms.internal.ge("GPLUS_OTHER", 32, "GPlusOther");
      H = new com.google.android.gms.internal.ge("GPLUS_NICKNAME", 33, "GPlusNickname");
      I = new com.google.android.gms.internal.ge("GPLUS_INVALID_CHAR", 34, "GPlusInvalidChar");
      J = new com.google.android.gms.internal.ge("GPLUS_INTERSTITIAL", 35, "GPlusInterstitial");
      K = new com.google.android.gms.internal.ge("GPLUS_PROFILE_ERROR", 36, "ProfileUpgradeError");
      L = new com.google.android.gms.internal.ge("INVALID_SCOPE", 37, "INVALID_SCOPE");
      v0 = new com.google.android.gms.internal.ge[38];
      v0[0] = a;
      v0[1] = b;
      v0[2] = c;
      v0[3] = d;
      v0[4] = e;
      v0[5] = f;
      v0[6] = g;
      v0[7] = h;
      v0[8] = i;
      v0[9] = j;
      v0[10] = k;
      v0[11] = l;
      v0[12] = m;
      v0[13] = n;
      v0[14] = o;
      v0[15] = p;
      v0[16] = q;
      v0[17] = r;
      v0[18] = s;
      v0[19] = t;
      v0[20] = u;
      v0[21] = v;
      v0[22] = w;
      v0[23] = x;
      v0[24] = y;
      v0[25] = z;
      v0[26] = A;
      v0[27] = B;
      v0[28] = C;
      v0[29] = D;
      v0[30] = E;
      v0[31] = F;
      v0[32] = G;
      v0[33] = H;
      v0[34] = I;
      v0[35] = J;
      v0[36] = K;
      v0[37] = L;
      P = (com.google.android.gms.internal.ge[])v0;
      M = "Error";
      N = "status";
    }

    private ge(String p0, int p1, String p2)
    {
      super(p0, p1);
      this.O = p2;
    }

    public static com.google.android.gms.internal.ge valueOf(String p0)
    {
      return (com.google.android.gms.internal.ge)com.gameloft.android.DecompRT.EnumBase.valueOf(com.google.android.gms.internal.ge.class, p0);
    }

    public static com.google.android.gms.internal.ge[] values()
    {
      return (com.google.android.gms.internal.ge[])P.clone();
    }

}
