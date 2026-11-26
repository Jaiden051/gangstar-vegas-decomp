// Decompiled from classes.dex (SourceFile: FacebookDialog$PendingCall.java) via IDA Pro 9.5 Dalvik Decompiler
package com.facebook.widget;

import java.util.UUID;
public class FacebookDialog$PendingCall implements android.os.Parcelable {
    // Fields
    public static final android.os.Parcelable.Creator CREATOR;
    private java.util.UUID callId;
    private int requestCode;
    private android.content.Intent requestIntent;

    // Methods
    static
    {
      CREATOR = (android.os.Parcelable.Creator)new com.facebook.widget.FacebookDialog$PendingCall$1();
    }

    public FacebookDialog$PendingCall(int p0)
    {
      super();
      this.callId = UUID.randomUUID();
      this.requestCode = p0;
    }

    private FacebookDialog$PendingCall(android.os.Parcel p0)
    {
      super();
      this.callId = UUID.fromString(p0.readString());
      this.requestIntent = (android.content.Intent)p0.readParcelable(null);
      this.requestCode = p0.readInt();
    }

    /* synthetic */ FacebookDialog$PendingCall(android.os.Parcel p0, com.facebook.widget.FacebookDialog$1 p1)
    {
      this(p0);
    }

    /* synthetic */ static void access$000(
            com.facebook.widget.FacebookDialog$PendingCall p0,
            int p1)
    {
      p0.requestCode = p1;
    }

    /* synthetic */ static void access$600(
            com.facebook.widget.FacebookDialog$PendingCall p0,
            android.content.Intent p1)
    {
      p0.requestIntent = p1;
    }

    private void setRequestCode(int p0)
    {
      this.requestCode = p0;
    }

    private void setRequestIntent(android.content.Intent p0)
    {
      this.requestIntent = p0;
    }

    public int describeContents()
    {
      return 0;
    }

    public java.util.UUID getCallId()
    {
      return this.callId;
    }

    public int getRequestCode()
    {
      return this.requestCode;
    }

    public android.content.Intent getRequestIntent()
    {
      return this.requestIntent;
    }

    public void writeToParcel(android.os.Parcel p0, int p1)
    {
      p0.writeString(this.callId.toString());
      p0.writeParcelable(this.requestIntent, 0);
      p0.writeInt(this.requestCode);
    }

}
