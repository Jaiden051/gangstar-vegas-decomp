// Decompiled from classes.dex (SourceFile: HttpTools.java) via IDA Pro 9.5 Dalvik Decompiler
package com.gameloft.glads.vast.util;

import android.text.TextUtils;
public class HttpTools {
    // Fields
    private static final java.lang.String TAG;

    // Methods
    static
    {
      TAG = com.gameloft.glads.vast.util.HttpTools.class.getName();
    }

    public HttpTools()
    {
      super();
    }

    /* synthetic */ static String access$000()
    {
      return TAG;
    }

    public static void httpGetURL(String p0)
    {
      if ( TextUtils.isEmpty(p0) )
        VASTLog.w(TAG, "url is null or empty");
      else
        new com.gameloft.glads.vast.util.HttpTools$1(p0).start();
    }

}
