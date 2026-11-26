// Decompiled from classes.dex (SourceFile: Product.java) via IDA Pro 9.5 Dalvik Decompiler
package com.amazon.device.associates;

public class Product implements android.os.Parcelable {
    // Fields
    public static final android.os.Parcelable.Creator CREATOR;
    private final java.lang.String a;
    private final java.lang.String b;
    private final java.lang.String c;
    private final com.amazon.device.associates.Image d;
    private final com.amazon.device.associates.Price e;
    private final java.lang.String f;
    private final double g;

    // Methods
    static
    {
      CREATOR = (android.os.Parcelable.Creator)new com.amazon.device.associates.bw();
    }

    private Product(android.os.Parcel p0)
    {
      super();
      this.a = p0.readString();
      this.b = p0.readString();
      this.c = p0.readString();
      this.f = p0.readString();
      this.g = p0.readDouble();
      this.d = (com.amazon.device.associates.Image)p0.readParcelable(com.amazon.device.associates.Image.class.getClassLoader());
      this.e = (com.amazon.device.associates.Price)p0.readParcelable(com.amazon.device.associates.Price.class.getClassLoader());
    }

    /* synthetic */ Product(android.os.Parcel p0, com.amazon.device.associates.bw p1)
    {
      this(p0);
    }

    Product(
            String p0,
            String p1,
            String p2,
            com.amazon.device.associates.Image p3,
            com.amazon.device.associates.Price p4,
            String p5,
            double p6)
    {
      super();
      an.a(p0, "productId");
      an.a(p1, "title");
      an.a(p2, "description");
      this.a = p0;
      this.b = p1;
      this.c = p2;
      this.d = p3;
      this.e = p4;
      this.g = p6;
      this.f = p5;
    }

    org.json.JSONObject a()
    {
      org.json.JSONObject v1;
      org.json.JSONObject v2;
      org.json.JSONObject v3;
      v1 = null;
      v2 = new org.json.JSONObject();
      try
      {
        v2.put("productId", this.a);
        v2.put("title", this.b);
        v2.put("description", this.c);
        if ( this.d != null )
          v3 = this.d.a();
        else
          v3 = null;
        v2.put("image", v3);
        if ( this.e != null )
          v1 = this.e.a();
        v2.put("price", v1);
        v2.put("rating", this.g);
        v2.put("brand", this.f);
        return v2;
      }
      catch ( org.json.JSONException e )
      {
      }
      return v2;
    }

    public int describeContents()
    {
      return this.hashCode();
    }

    public String getBrand()
    {
      return this.f;
    }

    public String getDescription()
    {
      return this.c;
    }

    public com.amazon.device.associates.Image getImage()
    {
      return this.d;
    }

    public com.amazon.device.associates.Price getPrice()
    {
      return this.e;
    }

    public String getProductId()
    {
      return this.a;
    }

    public double getRating()
    {
      return this.g;
    }

    public String getTitle()
    {
      return this.b;
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
      v3 = new String[4];
      v3[0] = this.a;
      v3[1] = this.b;
      v3[2] = this.c;
      v3[3] = this.f;
      p0.writeStringArray(v3);
      p0.writeDouble(this.g);
      p0.writeParcelable((android.os.Parcelable)this.d, p1);
      p0.writeParcelable((android.os.Parcelable)this.e, p1);
    }

}
