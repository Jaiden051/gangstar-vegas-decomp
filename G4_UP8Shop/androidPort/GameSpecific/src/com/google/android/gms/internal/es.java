// Decompiled from classes.dex (SourceFile: es.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.internal;

import android.webkit.WebSettings;
public final class es {
    // Methods
    public static void a(android.content.Context p0, android.webkit.WebSettings p1)
    {
      er.a(p0, p1);
      p1.setMediaPlaybackRequiresUserGesture(false);
    }

    public static String getDefaultUserAgent(android.content.Context p0)
    {
      return WebSettings.getDefaultUserAgent(p0);
    }

}
