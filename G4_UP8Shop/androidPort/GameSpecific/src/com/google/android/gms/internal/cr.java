// Decompiled from classes.dex (SourceFile: cr.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.internal;

public final class cr implements com.google.android.gms.common.internal.safeparcel.SafeParcelable {
    // Fields
    public static final com.google.android.gms.internal.cq CREATOR;
    public final int a;
    public final com.google.android.gms.internal.dh b;
    public final com.google.android.gms.internal.da c;
    public final com.google.android.gms.internal.dc d;
    public final android.content.Context e;

    // Methods
    static
    {
      CREATOR = new com.google.android.gms.internal.cq();
    }

    cr(int p0, android.os.IBinder p1, android.os.IBinder p2, android.os.IBinder p3, android.os.IBinder p4)
    {
      super();
      this.a = p0;
      this.b = (com.google.android.gms.internal.dh)com.google.android.gms.dynamic.e.e(com.google.android.gms.dynamic.d$a.ag(p1));
      this.c = (com.google.android.gms.internal.da)com.google.android.gms.dynamic.e.e(com.google.android.gms.dynamic.d$a.ag(p2));
      this.d = (com.google.android.gms.internal.dc)com.google.android.gms.dynamic.e.e(com.google.android.gms.dynamic.d$a.ag(p3));
      this.e = (android.content.Context)com.google.android.gms.dynamic.e.e(com.google.android.gms.dynamic.d$a.ag(p4));
    }

    public cr(
            com.google.android.gms.internal.dc p0,
            com.google.android.gms.internal.dh p1,
            com.google.android.gms.internal.da p2,
            android.content.Context p3)
    {
      super();
      this.a = 1;
      this.d = p0;
      this.b = p1;
      this.c = p2;
      this.e = p3;
    }

    public static void a(android.content.Intent p0, com.google.android.gms.internal.cr p1)
    {
      android.os.Bundle v2;
      v2 = new android.os.Bundle(1);
      v2.putParcelable("com.google.android.gms.ads.internal.purchase.InAppPurchaseManagerInfo", (android.os.Parcelable)p1);
      p0.putExtra("com.google.android.gms.ads.internal.purchase.InAppPurchaseManagerInfo", v2);
    }

    public static com.google.android.gms.internal.cr b(android.content.Intent p0)
    {
      android.os.Bundle BundleExtra;
      try
      {
        BundleExtra = p0.getBundleExtra("com.google.android.gms.ads.internal.purchase.InAppPurchaseManagerInfo");
        BundleExtra.setClassLoader(com.google.android.gms.internal.cr.class.getClassLoader());
        return (com.google.android.gms.internal.cr)BundleExtra.getParcelable("com.google.android.gms.ads.internal.purchase.In" +
                                                                             "AppPurchaseManagerInfo");
      }
      catch ( Exception e )
      {
        return null;
      }
    }

    final android.os.IBinder a()
    {
      return com.google.android.gms.dynamic.e.h(this.b).asBinder();
    }

    final android.os.IBinder b()
    {
      return com.google.android.gms.dynamic.e.h(this.c).asBinder();
    }

    final android.os.IBinder c()
    {
      return com.google.android.gms.dynamic.e.h(this.d).asBinder();
    }

    final android.os.IBinder d()
    {
      return com.google.android.gms.dynamic.e.h(this.e).asBinder();
    }

    public final int describeContents()
    {
      return 0;
    }

    public final void writeToParcel(android.os.Parcel p0, int p1)
    {
      cq.a(this, p0, p1);
    }

}
