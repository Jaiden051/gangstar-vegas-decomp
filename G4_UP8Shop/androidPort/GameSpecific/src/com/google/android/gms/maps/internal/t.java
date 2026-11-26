// Decompiled from classes.dex (SourceFile: t.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.maps.internal;

import android.os.Bundle;
public final class t {
    // Methods
    private t()
    {
      super();
    }

    public static void a(android.os.Bundle p0, String p1, android.os.Parcelable p2)
    {
      android.os.Bundle Bundle;
      p0.setClassLoader(com.google.android.gms.maps.internal.t.class.getClassLoader());
      Bundle = p0.getBundle("map_state");
      if ( Bundle == null )
        Bundle = new android.os.Bundle();
      Bundle.setClassLoader(com.google.android.gms.maps.internal.t.class.getClassLoader());
      Bundle.putParcelable(p1, p2);
      p0.putBundle("map_state", Bundle);
    }

}
