// Decompiled from classes.dex (SourceFile: le.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.internal;

public final class le extends com.google.android.gms.common.data.d implements com.google.android.gms.plus.model.people.Person {
    // Methods
    public le(com.google.android.gms.common.data.DataHolder p0, int p1)
    {
      super(p0, p1);
    }

    private com.google.android.gms.plus.model.people.Person a()
    {
      return (com.google.android.gms.plus.model.people.Person)new com.google.android.gms.internal.kt(this.e("displayName"), this.e("personId"), (com.google.android.gms.internal.kt$c)new com.google.android.gms.internal.kt$c(this.e("image")), this.P(), this.e("url"));
    }

    private static java.util.ArrayList<com.google.android.gms.plus.model.people.Person$Organizations> kU()
    {
      return null;
    }

    private static java.util.ArrayList<com.google.android.gms.plus.model.people.Person$PlacesLived> kV()
    {
      return null;
    }

    private static java.util.ArrayList<com.google.android.gms.plus.model.people.Person$Urls> kW()
    {
      return null;
    }

    public final boolean A()
    {
      return false;
    }

    public final String B()
    {
      return this.e("personId");
    }

    public final boolean C()
    {
      return true;
    }

    public final boolean C_()
    {
      return false;
    }

    public final com.google.android.gms.plus.model.people.Person$Image D()
    {
      return (com.google.android.gms.plus.model.people.Person$Image)new com.google.android.gms.internal.kt$c(this.e("image"));
    }

    public final boolean F()
    {
      return true;
    }

    public final boolean G()
    {
      return false;
    }

    public final boolean H()
    {
      return false;
    }

    public final String I()
    {
      return null;
    }

    public final boolean J()
    {
      return false;
    }

    public final com.google.android.gms.plus.model.people.Person$Name K()
    {
      return null;
    }

    public final boolean M()
    {
      return false;
    }

    public final String N()
    {
      return null;
    }

    public final boolean O()
    {
      return false;
    }

    public final int P()
    {
      return kt$e.bA(this.e("objectType"));
    }

    public final boolean Q()
    {
      return true;
    }

    /* synthetic */ public final java.util.List R()
    {
      return null;
    }

    public final boolean T()
    {
      return false;
    }

    /* synthetic */ public final java.util.List U()
    {
      return null;
    }

    public final boolean W()
    {
      return false;
    }

    public final int X()
    {
      return 0;
    }

    public final boolean Y()
    {
      return false;
    }

    public final int Z()
    {
      return 0;
    }

    public final boolean aa()
    {
      return false;
    }

    public final String ab()
    {
      return null;
    }

    public final boolean ac()
    {
      return false;
    }

    public final String ad()
    {
      return this.e("url");
    }

    public final boolean ae()
    {
      return true;
    }

    /* synthetic */ public final java.util.List af()
    {
      return null;
    }

    public final boolean ah()
    {
      return false;
    }

    public final boolean ai()
    {
      return false;
    }

    public final boolean aj()
    {
      return false;
    }

    public final String f()
    {
      return null;
    }

    /* synthetic */ public final Object h()
    {
      return new com.google.android.gms.internal.kt(this.e("displayName"), this.e("personId"), (com.google.android.gms.internal.kt$c)new com.google.android.gms.internal.kt$c(this.e("image")), this.P(), this.e("url"));
    }

    public final com.google.android.gms.plus.model.people.Person$AgeRange j()
    {
      return null;
    }

    public final boolean l()
    {
      return false;
    }

    public final String m()
    {
      return null;
    }

    public final boolean n()
    {
      return false;
    }

    public final String o()
    {
      return null;
    }

    public final boolean p()
    {
      return false;
    }

    public final int q()
    {
      return 0;
    }

    public final boolean r()
    {
      return false;
    }

    public final com.google.android.gms.plus.model.people.Person$Cover s()
    {
      return null;
    }

    public final boolean u()
    {
      return false;
    }

    public final String v()
    {
      return null;
    }

    public final boolean w()
    {
      return false;
    }

    public final String x()
    {
      return this.e("displayName");
    }

    public final boolean y()
    {
      return true;
    }

    public final int z()
    {
      return 0;
    }

}
