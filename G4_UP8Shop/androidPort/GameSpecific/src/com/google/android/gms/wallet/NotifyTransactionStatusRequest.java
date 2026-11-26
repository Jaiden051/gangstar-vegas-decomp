// Decompiled from classes.dex (SourceFile: NotifyTransactionStatusRequest.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.wallet;

public final class NotifyTransactionStatusRequest implements com.google.android.gms.common.internal.safeparcel.SafeParcelable {
    // Fields
    public static final android.os.Parcelable.Creator CREATOR;
    final int a;
    java.lang.String b;
    int c;
    java.lang.String d;

    // Methods
    static
    {
      CREATOR = (android.os.Parcelable.Creator)new com.google.android.gms.wallet.m();
    }

    NotifyTransactionStatusRequest()
    {
      super();
      this.a = 1;
    }

    NotifyTransactionStatusRequest(int p0, String p1, int p2, String p3)
    {
      super();
      this.a = p0;
      this.b = p1;
      this.c = p2;
      this.d = p3;
    }

    private int a()
    {
      return this.a;
    }

    private String b()
    {
      return this.b;
    }

    private int c()
    {
      return this.c;
    }

    private String d()
    {
      return this.d;
    }

    public static com.google.android.gms.wallet.NotifyTransactionStatusRequest$Builder newBuilder()
    {
      com.google.android.gms.wallet.NotifyTransactionStatusRequest v0;
      v0 = new com.google.android.gms.wallet.NotifyTransactionStatusRequest();
      v0.getClass();
      return new com.google.android.gms.wallet.NotifyTransactionStatusRequest$Builder(v0, 0);
    }

    public final int describeContents()
    {
      return 0;
    }

    public final void writeToParcel(android.os.Parcel p0, int p1)
    {
      com.google.android.gms.wallet.m.a(this, p0, p1);
    }

}
