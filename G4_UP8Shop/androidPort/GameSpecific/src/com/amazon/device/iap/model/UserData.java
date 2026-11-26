// Decompiled from classes.dex (SourceFile: UserData.java) via IDA Pro 9.5 Dalvik Decompiler
package com.amazon.device.iap.model;

public final class UserData implements android.os.Parcelable {
    // Fields
    public static final android.os.Parcelable.Creator CREATOR;
    private static java.lang.String MARKETPLACE;
    private static java.lang.String USER_ID;
    private final java.lang.String marketplace;
    private final java.lang.String userId;

    // Methods
    static
    {
      CREATOR = (android.os.Parcelable.Creator)new com.amazon.device.iap.model.UserData$1();
    }

    private UserData(android.os.Parcel p0)
    {
      super();
      this.userId = p0.readString();
      this.marketplace = p0.readString();
    }

    /* synthetic */ UserData(android.os.Parcel p0, com.amazon.device.iap.model.UserData$1 p1)
    {
      this(p0);
    }

    public UserData(com.amazon.device.iap.internal.model.UserDataBuilder p0)
    {
      super();
      this.userId = p0.getUserId();
      this.marketplace = p0.getMarketplace();
    }

    public final int describeContents()
    {
      return 0;
    }

    public final String getMarketplace()
    {
      return this.marketplace;
    }

    public final String getUserId()
    {
      return this.userId;
    }

    public final org.json.JSONObject toJSON()
    {
      org.json.JSONObject v1;
      v1 = new org.json.JSONObject();
      try
      {
        v1.put("userId", this.userId);
        v1.put("marketplace", this.marketplace);
        return v1;
      }
      catch ( org.json.JSONException e )
      {
      }
      return v1;
    }

    public final String toString()
    {
      String v1;
      v1 = null;
      try
      {
        return this.toJSON().toString(4);
      }
      catch ( org.json.JSONException e )
      {
      }
      return v1;
    }

    public final void writeToParcel(android.os.Parcel p0, int p1)
    {
      String[] v3;
      v3 = new String[2];
      v3[0] = this.userId;
      v3[1] = this.marketplace;
      p0.writeStringArray(v3);
    }

}
