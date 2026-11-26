// Decompiled from classes.dex (SourceFile: FragmentTabHost$TabInfo.java) via IDA Pro 9.5 Dalvik Decompiler
package android.support.v4.app;

final class FragmentTabHost$TabInfo {
    // Fields
    private final java.lang.String a;
    private final java.lang.Class b;
    private final android.os.Bundle c;
    private android.support.v4.app.Fragment d;

    // Methods
    FragmentTabHost$TabInfo(String p0, Class<?> p1, android.os.Bundle p2)
    {
      super();
      this.a = p0;
      this.b = p1;
      this.c = p2;
    }

    /* synthetic */ static android.support.v4.app.Fragment access$100(
            android.support.v4.app.FragmentTabHost$TabInfo p0)
    {
      return p0.d;
    }

    /* synthetic */ static android.support.v4.app.Fragment access$102(
            android.support.v4.app.FragmentTabHost$TabInfo p0,
            android.support.v4.app.Fragment p1)
    {
      p0.d = p1;
      return p1;
    }

    /* synthetic */ static String access$200(android.support.v4.app.FragmentTabHost$TabInfo p0)
    {
      return p0.a;
    }

    /* synthetic */ static Class access$300(android.support.v4.app.FragmentTabHost$TabInfo p0)
    {
      return p0.b;
    }

    /* synthetic */ static android.os.Bundle access$400(
            android.support.v4.app.FragmentTabHost$TabInfo p0)
    {
      return p0.c;
    }

}
