// Decompiled from classes.dex (SourceFile: AppStateManager.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.appstate;

import com.google.android.gms.internal.hn;
public final class AppStateManager {
    // Fields
    static final com.google.android.gms.common.api.Api$c a;
    public static final com.google.android.gms.common.api.Scope b;
    public static final com.google.android.gms.common.api.Api c;
    private static final com.google.android.gms.common.api.Api$b d;

    // Methods
    static
    {
      com.google.android.gms.common.api.Scope[] v0;
      a = new com.google.android.gms.common.api.Api$c();
      d = (com.google.android.gms.common.api.Api$b)new com.google.android.gms.appstate.AppStateManager$1();
      b = new com.google.android.gms.common.api.Scope("https://www.googleapis.com/auth/appstate");
      v0 = new com.google.android.gms.common.api.Scope[1];
      v0[0] = b;
      c = new com.google.android.gms.common.api.Api(d, a, v0);
    }

    private AppStateManager()
    {
      super();
    }

    public static com.google.android.gms.internal.gb a(
            com.google.android.gms.common.api.GoogleApiClient p0)
    {
      com.google.android.gms.internal.gb v1;
      hn.b(p0 != null, "GoogleApiClient parameter is required.");
      hn.a(p0.g(), "GoogleApiClient must be connected.");
      v1 = (com.google.android.gms.internal.gb)p0.a(a);
      hn.a(
        v1 != null,
        "GoogleApiClient is not configured to use the AppState API. Pass AppStateManager.API into GoogleApiClient.Builder#add" +
        "Api() to use this feature.");
      return v1;
    }

    public static com.google.android.gms.common.api.PendingResult<com.google.android.gms.appstate.AppStateManager$StateDeletedResult> delete(
            com.google.android.gms.common.api.GoogleApiClient p0,
            int p1)
 throws android.os.RemoteException {
      return (com.google.android.gms.common.api.PendingResult)p0.b(new com.google.android.gms.appstate.AppStateManager$5(p1));
    }

    private static com.google.android.gms.appstate.AppStateManager$StateResult e(
            com.google.android.gms.common.api.Status p0)
    {
      return (com.google.android.gms.appstate.AppStateManager$StateResult)new com.google.android.gms.appstate.AppStateManager$2(p0);
    }

    /* synthetic */ static com.google.android.gms.appstate.AppStateManager$StateResult f(
            com.google.android.gms.common.api.Status p0)
    {
      return e(p0);
    }

    public static int getMaxNumKeys(com.google.android.gms.common.api.GoogleApiClient p0)
    {
      return a(p0).h();
    }

    public static int getMaxStateSize(com.google.android.gms.common.api.GoogleApiClient p0)
    {
      return a(p0).g();
    }

    public static com.google.android.gms.common.api.PendingResult<com.google.android.gms.appstate.AppStateManager$StateListResult> list(
            com.google.android.gms.common.api.GoogleApiClient p0)
 throws android.os.RemoteException {
      return (com.google.android.gms.common.api.PendingResult)p0.a(new com.google.android.gms.appstate.AppStateManager$7());
    }

    public static com.google.android.gms.common.api.PendingResult<com.google.android.gms.appstate.AppStateManager$StateResult> load(
            com.google.android.gms.common.api.GoogleApiClient p0,
            int p1)
 throws android.os.RemoteException {
      return (com.google.android.gms.common.api.PendingResult)p0.a(new com.google.android.gms.appstate.AppStateManager$6(p1));
    }

    public static com.google.android.gms.common.api.PendingResult<com.google.android.gms.appstate.AppStateManager$StateResult> resolve(
            com.google.android.gms.common.api.GoogleApiClient p0,
            int p1,
            String p2,
            byte[] p3)
 throws android.os.RemoteException {
      return (com.google.android.gms.common.api.PendingResult)p0.b(new com.google.android.gms.appstate.AppStateManager$8(p1, p2, p3));
    }

    public static com.google.android.gms.common.api.PendingResult<com.google.android.gms.common.api.Status> signOut(
            com.google.android.gms.common.api.GoogleApiClient p0)
 throws android.os.RemoteException {
      return (com.google.android.gms.common.api.PendingResult)p0.b(new com.google.android.gms.appstate.AppStateManager$9());
    }

    public static void update(com.google.android.gms.common.api.GoogleApiClient p0, int p1, byte[] p2)
 throws android.os.RemoteException {
      p0.b(new com.google.android.gms.appstate.AppStateManager$3(p1, p2));
    }

    public static com.google.android.gms.common.api.PendingResult<com.google.android.gms.appstate.AppStateManager$StateResult> updateImmediate(
            com.google.android.gms.common.api.GoogleApiClient p0,
            int p1,
            byte[] p2)
 throws android.os.RemoteException {
      return (com.google.android.gms.common.api.PendingResult)p0.b(new com.google.android.gms.appstate.AppStateManager$4(p1, p2));
    }

}
