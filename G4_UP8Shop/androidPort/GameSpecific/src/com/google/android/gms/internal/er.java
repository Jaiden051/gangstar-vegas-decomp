// Decompiled from classes.dex (SourceFile: er.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.internal;

public final class er {
    // Methods
    public static void a(android.content.Context p0, android.webkit.WebSettings p1)
    {
      p1.setAppCachePath(p0.getCacheDir().getAbsolutePath());
      p1.setAppCacheMaxSize(0);
      p1.setAppCacheEnabled(true);
      p1.setDatabasePath(p0.getDatabasePath("com.google.android.gms.ads.db").getAbsolutePath());
      p1.setDatabaseEnabled(true);
      p1.setDomStorageEnabled(true);
      p1.setDisplayZoomControls(false);
      p1.setBuiltInZoomControls(true);
      p1.setSupportZoom(true);
    }

    public static void a(android.view.Window p0)
    {
      p0.setFlags(0x1000000, 0x1000000);
    }

    public static void a(android.webkit.WebView p0)
    {
      p0.onPause();
    }

    public static void b(android.webkit.WebView p0)
    {
      p0.onResume();
    }

    public static void d(android.view.View p0)
    {
      p0.setLayerType(1, null);
    }

    public static void e(android.view.View p0)
    {
      p0.setLayerType(0, null);
    }

}
