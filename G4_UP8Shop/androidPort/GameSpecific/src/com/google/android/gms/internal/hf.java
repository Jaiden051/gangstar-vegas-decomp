// Decompiled from classes.dex (SourceFile: hf.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.internal;

import android.net.Uri;
public class hf {
    // Fields
    private static final android.net.Uri a;
    private static final android.net.Uri b;

    // Methods
    static
    {
      android.net.Uri v0; // RETVAL
    
      v0 = Uri.parse("http://plus.google.com/");
      a = v0;
      b = v0.buildUpon().appendPath("circles").appendPath("find").build();
    }

    public static android.content.Intent aB(String p0)
    {
      android.content.Intent v1;
      v1 = new android.content.Intent("android.settings.APPLICATION_DETAILS_SETTINGS");
      v1.setData(Uri.fromParts("package", p0, null));
      return v1;
    }

    private static android.net.Uri aC(String p0)
    {
      return Uri.parse("market://details").buildUpon().appendQueryParameter("id", p0).build();
    }

    public static android.content.Intent aD(String p0)
    {
      android.content.Intent v1;
      v1 = new android.content.Intent("android.intent.action.VIEW");
      v1.setData(aC(p0));
      v1.setPackage("com.android.vending");
      v1.addFlags(0x80000);
      return v1;
    }

    public static android.content.Intent fv()
    {
      return new android.content.Intent("android.settings.DATE_SETTINGS");
    }

}
