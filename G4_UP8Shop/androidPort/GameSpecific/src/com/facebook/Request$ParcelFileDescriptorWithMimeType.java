// Decompiled from classes.dex (SourceFile: Request$ParcelFileDescriptorWithMimeType.java) via IDA Pro 9.5 Dalvik Decompiler
package com.facebook;

class Request$ParcelFileDescriptorWithMimeType implements android.os.Parcelable {
    // Fields
    public static final android.os.Parcelable.Creator CREATOR;
    private final android.os.ParcelFileDescriptor fileDescriptor;
    private final java.lang.String mimeType;

    // Methods
    static
    {
      CREATOR = (android.os.Parcelable.Creator)new com.facebook.Request$ParcelFileDescriptorWithMimeType$1();
    }

    private Request$ParcelFileDescriptorWithMimeType(android.os.Parcel p0)
    {
      super();
      this.mimeType = p0.readString();
      this.fileDescriptor = p0.readFileDescriptor();
    }

    /* synthetic */ Request$ParcelFileDescriptorWithMimeType(android.os.Parcel p0, com.facebook.Request$1 p1)
    {
      this(p0);
    }

    public Request$ParcelFileDescriptorWithMimeType(android.os.ParcelFileDescriptor p0, String p1)
    {
      super();
      this.mimeType = p1;
      this.fileDescriptor = p0;
    }

    public int describeContents()
    {
      return 1;
    }

    public android.os.ParcelFileDescriptor getFileDescriptor()
    {
      return this.fileDescriptor;
    }

    public String getMimeType()
    {
      return this.mimeType;
    }

    public void writeToParcel(android.os.Parcel p0, int p1)
    {
      p0.writeString(this.mimeType);
      p0.writeFileDescriptor(this.fileDescriptor.getFileDescriptor());
    }

}
