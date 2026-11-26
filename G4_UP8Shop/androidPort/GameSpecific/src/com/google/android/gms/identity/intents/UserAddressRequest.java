// Decompiled from classes.dex (SourceFile: UserAddressRequest.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.identity.intents;

public final class UserAddressRequest implements com.google.android.gms.common.internal.safeparcel.SafeParcelable {
    // Fields
    public static final android.os.Parcelable.Creator CREATOR;
    java.util.List a;
    private final int b;

    // Methods
    static
    {
      CREATOR = (android.os.Parcelable.Creator)new com.google.android.gms.identity.intents.a();
    }

    UserAddressRequest()
    {
      super();
      this.b = 1;
    }

    UserAddressRequest(int p0, java.util.List<com.google.android.gms.identity.intents.model.CountrySpecification> p1)
    {
      super();
      this.b = p0;
      this.a = p1;
    }

    public static com.google.android.gms.identity.intents.UserAddressRequest$Builder newBuilder()
    {
      com.google.android.gms.identity.intents.UserAddressRequest v0;
      v0 = new com.google.android.gms.identity.intents.UserAddressRequest();
      v0.getClass();
      return new com.google.android.gms.identity.intents.UserAddressRequest$Builder(v0, 0);
    }

    public final int a()
    {
      return this.b;
    }

    public final int describeContents()
    {
      return 0;
    }

    public final void writeToParcel(android.os.Parcel p0, int p1)
    {
      com.google.android.gms.identity.intents.a.a(this, p0, p1);
    }

}
