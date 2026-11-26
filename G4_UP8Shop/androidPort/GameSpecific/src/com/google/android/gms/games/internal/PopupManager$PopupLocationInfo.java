// Decompiled from classes.dex (SourceFile: PopupManager$PopupLocationInfo.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.games.internal;

public final class PopupManager$PopupLocationInfo {
    // Fields
    public android.os.IBinder a;
    public int b;
    public int c;
    public int d;
    public int e;
    public int f;
    public int g;

    // Methods
    private PopupManager$PopupLocationInfo(int p0, android.os.IBinder p1)
    {
      super();
      this.c = -1;
      this.d = 0;
      this.e = 0;
      this.f = 0;
      this.g = 0;
      this.b = p0;
      this.a = p1;
    }

    /* synthetic */ PopupManager$PopupLocationInfo(int p0, android.os.IBinder p1, int p2)
    {
      this(p0, p1);
    }

    public final android.os.Bundle a()
    {
      android.os.Bundle v1;
      v1 = new android.os.Bundle();
      v1.putInt("popupLocationInfo.gravity", this.b);
      v1.putInt("popupLocationInfo.displayId", this.c);
      v1.putInt("popupLocationInfo.left", this.d);
      v1.putInt("popupLocationInfo.top", this.e);
      v1.putInt("popupLocationInfo.right", this.f);
      v1.putInt("popupLocationInfo.bottom", this.g);
      return v1;
    }

}
