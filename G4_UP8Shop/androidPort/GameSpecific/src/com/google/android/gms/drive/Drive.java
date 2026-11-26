// Decompiled from classes.dex (SourceFile: Drive.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.drive;

public final class Drive {
    // Fields
    public static final com.google.android.gms.common.api.Api$c a;
    public static final com.google.android.gms.common.api.Scope b;
    public static final com.google.android.gms.common.api.Scope c;
    public static final com.google.android.gms.common.api.Scope d;
    public static final com.google.android.gms.common.api.Scope e;
    public static final com.google.android.gms.common.api.Api f;
    public static final com.google.android.gms.common.api.Api g;
    public static final com.google.android.gms.drive.DriveApi h;
    public static final com.google.android.gms.drive.b i;
    public static final com.google.android.gms.drive.d j;

    // Methods
    static
    {
      a = new com.google.android.gms.common.api.Api$c();
      b = new com.google.android.gms.common.api.Scope("https://www.googleapis.com/auth/drive.file");
      c = new com.google.android.gms.common.api.Scope("https://www.googleapis.com/auth/drive.appdata");
      d = new com.google.android.gms.common.api.Scope("https://www.googleapis.com/auth/drive");
      e = new com.google.android.gms.common.api.Scope("https://www.googleapis.com/auth/drive.apps");
      f = new com.google.android.gms.common.api.Api((com.google.android.gms.common.api.Api$b)new com.google.android.gms.drive.Drive$1(), a, new com.google.android.gms.common.api.Scope[0]);
      g = new com.google.android.gms.common.api.Api((com.google.android.gms.common.api.Api$b)new com.google.android.gms.drive.Drive$2(), a, new com.google.android.gms.common.api.Scope[0]);
      h = (com.google.android.gms.drive.DriveApi)new com.google.android.gms.drive.internal.p();
      i = (com.google.android.gms.drive.b)new com.google.android.gms.drive.internal.t();
      j = (com.google.android.gms.drive.d)new com.google.android.gms.drive.internal.w();
    }

    private Drive()
    {
      super();
    }

}
