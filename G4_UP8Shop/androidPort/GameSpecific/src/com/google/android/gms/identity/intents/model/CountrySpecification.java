// Decompiled from classes.dex (SourceFile: CountrySpecification.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.identity.intents.model;

public class CountrySpecification implements com.google.android.gms.common.internal.safeparcel.SafeParcelable {
    // Fields
    public static final android.os.Parcelable.Creator CREATOR;
    java.lang.String a;
    private final int b;

    // Methods
    static
    {
      CREATOR = (android.os.Parcelable.Creator)new com.google.android.gms.identity.intents.model.a();
    }

    CountrySpecification(int p0, String p1)
    {
      super();
      this.b = p0;
      this.a = p1;
    }

    private CountrySpecification(String p0)
    {
      super();
      this.b = 1;
      this.a = p0;
    }

    private String b()
    {
      return this.a;
    }

    public final int a()
    {
      return this.b;
    }

    public int describeContents()
    {
      return 0;
    }

    public void writeToParcel(android.os.Parcel p0, int p1)
    {
      com.google.android.gms.identity.intents.model.a.a(this, p0, p1);
    }

}
