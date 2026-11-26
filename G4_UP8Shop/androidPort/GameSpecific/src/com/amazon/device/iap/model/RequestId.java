// Decompiled from classes.dex (SourceFile: RequestId.java) via IDA Pro 9.5 Dalvik Decompiler
package com.amazon.device.iap.model;

import java.util.UUID;
public final class RequestId implements android.os.Parcelable {
    // Fields
    public static final android.os.Parcelable.Creator CREATOR;
    private static java.lang.String ENCODED_ID;
    private final java.lang.String encodedId;

    // Methods
    static
    {
      CREATOR = (android.os.Parcelable.Creator)new com.amazon.device.iap.model.RequestId$1();
    }

    public RequestId()
    {
      super();
      this.encodedId = UUID.randomUUID().toString();
    }

    private RequestId(android.os.Parcel p0)
    {
      super();
      this.encodedId = p0.readString();
    }

    /* synthetic */ RequestId(android.os.Parcel p0, com.amazon.device.iap.model.RequestId$1 p1)
    {
      this(p0);
    }

    private RequestId(String p0)
    {
      super();
      com.amazon.device.iap.internal.util.d.a(p0, "encodedId");
      this.encodedId = p0;
    }

    public static com.amazon.device.iap.model.RequestId fromString(String p0)
    {
      return new com.amazon.device.iap.model.RequestId(p0);
    }

    public final int describeContents()
    {
      return 0;
    }

    public final boolean equals(Object p0)
    {
      return p0 != null
          && this.getClass() == p0.getClass()
          && this.encodedId.equals(((com.amazon.device.iap.model.RequestId)p0).encodedId);
    }

    public final int hashCode()
    {
      int v1;
      if ( this.encodedId != null )
        v1 = this.encodedId.hashCode();
      else
        v1 = 0;
      return v1 + 31;
    }

    public final org.json.JSONObject toJSON()
    {
      org.json.JSONObject v1;
      v1 = new org.json.JSONObject();
      try
      {
        v1.put("encodedId", this.encodedId);
        return v1;
      }
      catch ( org.json.JSONException e )
      {
      }
      return v1;
    }

    public final String toString()
    {
      return this.encodedId;
    }

    public final void writeToParcel(android.os.Parcel p0, int p1)
    {
      p0.writeString(this.encodedId);
    }

}
