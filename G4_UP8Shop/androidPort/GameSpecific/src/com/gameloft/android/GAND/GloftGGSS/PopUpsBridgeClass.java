// Decompiled from classes.dex (SourceFile: PopUpsBridgeClass.java) via IDA Pro 9.5 Dalvik Decompiler
package com.gameloft.android.GAND.GloftGGSS;

public class PopUpsBridgeClass {
    // Fields
    static android.app.Activity a;

    // Methods
    static
    {
      a = null;
    }

    public PopUpsBridgeClass()
    {
      super();
    }

    public static void DestroyPopUps()
    {
      a.runOnUiThread((Runnable)new com.gameloft.android.GAND.GloftGGSS.cn());
    }

    public static void HidePopUpsView()
    {
      a.runOnUiThread((Runnable)new com.gameloft.android.GAND.GloftGGSS.cp());
    }

    public static void InitBridgeLibrary(android.app.Activity p0, android.widget.RelativeLayout p1)
    {
      PopUpsManager.GetInstance().a(p0, p1);
      a = p0;
    }

    public static boolean InitPopUps()
    {
      return PopUpsManager.GetInstance().a();
    }

    public static void OnAssetTracking(String p0)
    {
      nativeOnAssetTracking(p0);
    }

    public static void OnDownloadState(int p0)
    {
      nativeOnDownloadState(p0);
    }

    public static void OnErrorMessage(int p0)
    {
      nativeOnErrorMessage(p0);
    }

    public static void OnViewState(int p0)
    {
      nativeOnViewState(p0);
    }

    public static int PopUpsViewState()
    {
      return PopUpsManager.GetInstance().c();
    }

    public static void SetPopUpsViewSize(int p0, int p1, int p2, int p3)
    {
      PopUpsManager.GetInstance().a(p0, p1, p2, p3);
    }

    public static int ShowPopUpsView(String p0, String p1)
    {
      com.gameloft.android.GAND.GloftGGSS.PopUpsManager$PopUpsError v2;
      java.util.concurrent.FutureTask v3;
      com.gameloft.android.GAND.GloftGGSS.PopUpsManager$PopUpsError v4;
      v2 = PopUpsManager$PopUpsError.a;
      try
      {
        v3 = new java.util.concurrent.FutureTask((java.util.concurrent.Callable)new com.gameloft.android.GAND.GloftGGSS.co(p0, p1));
        a.runOnUiThread(v3);
        v4 = (com.gameloft.android.GAND.GloftGGSS.PopUpsManager$PopUpsError)v3.get();
        return v4.a();
      }
      catch ( Exception e )
      {
        v4 = v2;
      }
      return v4.a();
    }

    public static native void nativeOnAssetTracking(java.lang.String p0);

    public static native void nativeOnDownloadState(int p0);

    public static native void nativeOnErrorMessage(int p0);

    public static native void nativeOnViewState(int p0);

}
