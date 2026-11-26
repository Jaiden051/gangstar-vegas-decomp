// Decompiled from classes.dex (SourceFile: NativeAppCallContentProvider.java) via IDA Pro 9.5 Dalvik Decompiler
package com.facebook;

import android.os.ParcelFileDescriptor;
import android.util.Log;
import java.util.UUID;
public class NativeAppCallContentProvider extends android.content.ContentProvider {
    // Fields
    private static java.lang.String ATTACHMENT_URL_BASE;
    private static final java.lang.String TAG;
    private final com.facebook.NativeAppCallContentProvider$AttachmentDataSource dataSource;

    // Methods
    static
    {
      TAG = com.facebook.NativeAppCallContentProvider.class.getName();
    }

    public NativeAppCallContentProvider()
    {
      this((com.facebook.NativeAppCallContentProvider$AttachmentDataSource)new com.facebook.NativeAppCallAttachmentStore());
    }

    NativeAppCallContentProvider(com.facebook.NativeAppCallContentProvider$AttachmentDataSource p0)
    {
      super();
      this.dataSource = p0;
    }

    public static String getAttachmentUrl(String p0, java.util.UUID p1, String p2)
    {
      Object[] v3;
      v3 = new Object[4];
      v3[0] = "content://com.facebook.app.NativeAppCallContentProvider";
      v3[1] = p0;
      v3[2] = p1.toString();
      v3[3] = p2;
      return String.format("%s%s/%s/%s", v3);
    }

    public int delete(android.net.Uri p0, String p1, String[] p2)
    {
      return 0;
    }

    public String getType(android.net.Uri p0)
    {
      return null;
    }

    public android.net.Uri insert(android.net.Uri p0, android.content.ContentValues p1)
    {
      return null;
    }

    public boolean onCreate()
    {
      return true;
    }

    public android.os.ParcelFileDescriptor openFile(android.net.Uri p0, String p1)
 throws java.io.FileNotFoundException {
      android.util.Pair v3; // RETVAL
    
      v3 = this.parseCallIdAndAttachmentName(p0);
      if ( v3 == null )
        throw new java.io.FileNotFoundException();
      try
      {
        return ParcelFileDescriptor.open(
                 this.dataSource.openAttachment((java.util.UUID)v3.first, (String)v3.second),
                 0x10000000);
      }
      catch ( java.io.FileNotFoundException v5 )
      {
        Log.e(TAG, "Got unexpected exception:" + v5);
        throw v5;
      }
    }

    android.util.Pair<java.util.UUID, String> parseCallIdAndAttachmentName(android.net.Uri p0)
    {
      String[] v2; // RETVAL
    
      try
      {
        v2 = p0.getPath().substring(1).split("/");
        return new android.util.Pair(UUID.fromString(v2[0]), v2[1]);
      }
      catch ( Exception e )
      {
        return null;
      }
    }

    public android.database.Cursor query(
            android.net.Uri p0,
            String[] p1,
            String p2,
            String[] p3,
            String p4)
    {
      return null;
    }

    public int update(
            android.net.Uri p0,
            android.content.ContentValues p1,
            String p2,
            String[] p3)
    {
      return 0;
    }

}
