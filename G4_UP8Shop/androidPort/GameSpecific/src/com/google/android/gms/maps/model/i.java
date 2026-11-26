// Decompiled from classes.dex (SourceFile: i.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.maps.model;

public class i {
    // Methods
    static void a(com.google.android.gms.maps.model.Tile p0, android.os.Parcel p1, int p2)
    {
      int v3;
      v3 = com.google.android.gms.common.internal.safeparcel.b.C(p1);
      com.google.android.gms.common.internal.safeparcel.b.c(p1, 1, p0.a());
      com.google.android.gms.common.internal.safeparcel.b.c(p1, 2, p0.a);
      com.google.android.gms.common.internal.safeparcel.b.c(p1, 3, p0.b);
      com.google.android.gms.common.internal.safeparcel.b.a(p1, 4, p0.c, false);
      com.google.android.gms.common.internal.safeparcel.b.G(p1, v3);
    }

}
