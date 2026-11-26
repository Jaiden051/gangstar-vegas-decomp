// Decompiled from classes.dex (SourceFile: Receipt.java) via IDA Pro 9.5 Dalvik Decompiler
package com.amazon.device.associates;

public class Receipt implements android.os.Parcelable {
    // Fields
    public static final android.os.Parcelable.Creator CREATOR;
    private final java.lang.String a;
    private final java.lang.String b;
    private final java.lang.String c;
    private final int d;
    private final java.lang.String e;
    private final java.util.Date f;
    private final boolean g;

    // Methods
    static
    {
      CREATOR = (android.os.Parcelable.Creator)new com.amazon.device.associates.g();
    }

    private Receipt(android.os.Parcel p0)
    {
      super();
      this.a = p0.readString();
      this.b = p0.readString();
      this.c = p0.readString();
      this.e = p0.readString();
      this.f = new java.util.Date(p0.readString());
      this.g = Boolean.valueOf(p0.readString()).booleanValue();
      this.d = p0.readInt();
    }

    /* synthetic */ Receipt(android.os.Parcel p0, com.amazon.device.associates.g p1)
    {
      this(p0);
    }

    Receipt(String p0, String p1, String p2, int p3, String p4, java.util.Date p5, boolean p6)
    {
      super();
      an.a(p1, "receiptId");
      an.a(p1, "productId");
      an.a(p4, "purchaseToken");
      an.a(p5, "purchaseDate");
      this.a = p0;
      this.b = p1;
      this.c = p2;
      this.d = p3;
      this.e = p4;
      this.f = p5;
      this.g = p6;
    }

    org.json.JSONObject a()
    {
      org.json.JSONObject v1;
      v1 = new org.json.JSONObject();
      try
      {
        v1.put("receiptId", this.a);
        v1.put("productId", this.b);
        v1.put("parentProductId", this.c);
        v1.put("quantity", this.d);
        v1.put("purchaseToken", this.e);
        v1.put("purchaseDate", this.f);
        v1.put("isCanceled", this.g);
        return v1;
      }
      catch ( org.json.JSONException e )
      {
      }
      return v1;
    }

    public int describeContents()
    {
      return this.hashCode();
    }

    public String getParentProductId()
    {
      return this.c;
    }

    public String getProductId()
    {
      return this.b;
    }

    public java.util.Date getPurchaseDate()
    {
      return this.f;
    }

    public String getPurchaseToken()
    {
      return this.e;
    }

    public int getQuantity()
    {
      return this.d;
    }

    public String getReceiptId()
    {
      return this.a;
    }

    public boolean isCanceled()
    {
      return this.g;
    }

    public String toString()
    {
      String v1;
      v1 = null;
      try
      {
        return this.a().toString(4);
      }
      catch ( org.json.JSONException e )
      {
      }
      return v1;
    }

    public void writeToParcel(android.os.Parcel p0, int p1)
    {
      String[] v3;
      v3 = new String[6];
      v3[0] = this.a;
      v3[1] = this.b;
      v3[2] = this.c;
      v3[3] = this.e;
      v3[4] = this.f.toString();
      v3[5] = Boolean.toString(this.g);
      p0.writeStringArray(v3);
      p0.writeInt(this.d);
    }

}
