// Decompiled from classes.dex (SourceFile: ActivityRecognition.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.location;

public class ActivityRecognition {
    // Fields
    public static java.lang.String a;
    public static final com.google.android.gms.common.api.Api b;
    public static com.google.android.gms.location.ActivityRecognitionApi c;
    private static final com.google.android.gms.common.api.Api$c d;
    private static final com.google.android.gms.common.api.Api$b e;

    // Methods
    static
    {
      d = new com.google.android.gms.common.api.Api$c();
      e = (com.google.android.gms.common.api.Api$b)new com.google.android.gms.location.ActivityRecognition$1();
      b = new com.google.android.gms.common.api.Api(e, d, new com.google.android.gms.common.api.Scope[0]);
      c = (com.google.android.gms.location.ActivityRecognitionApi)new com.google.android.gms.internal.jb();
    }

    private ActivityRecognition()
    {
      super();
    }

    /* synthetic */ static com.google.android.gms.common.api.Api$c iQ()
    {
      return d;
    }

}
