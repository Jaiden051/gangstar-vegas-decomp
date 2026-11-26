// Decompiled from classes.dex (SourceFile: NativeAppCallAttachmentStore.java) via IDA Pro 9.5 Dalvik Decompiler
package com.facebook;

import android.util.Log;
import com.facebook.internal.Utility;
import com.facebook.internal.Validate;
import java.net.URLEncoder;
public final class NativeAppCallAttachmentStore implements com.facebook.NativeAppCallContentProvider$AttachmentDataSource {
    // Fields
    static java.lang.String ATTACHMENTS_DIR_NAME;
    private static final java.lang.String TAG;
    private static java.io.File attachmentsDirectory;

    // Methods
    static
    {
      TAG = com.facebook.NativeAppCallAttachmentStore.class.getName();
    }

    public NativeAppCallAttachmentStore()
    {
      super();
    }

    private <T> void addAttachments(
            android.content.Context p0,
            java.util.UUID p1,
            java.util.Map<String, T> p2,
            com.facebook.NativeAppCallAttachmentStore$ProcessAttachment<T> p3)
    {
      java.util.List v5;
      java.util.Iterator v6;
      java.util.Map.Entry v7;
      String v8;
      Object Value;
      java.io.File AttachmentFile;
      Throwable v12;
      java.util.Iterator v13;
      java.io.File v14;
      if ( p2.size() != 0 )
      {
        if ( attachmentsDirectory == null )
          this.cleanupAllAttachments(p0);
        this.ensureAttachmentsDirectoryExists(p0);
        v5 = new java.util.ArrayList();
        try
        {
          v6 = p2.entrySet().iterator();
          while ( v6.hasNext() )
          {
            v7 = (java.util.Map.Entry)v6.next();
            v8 = (String)v7.getKey();
            Value = v7.getValue();
            AttachmentFile = this.getAttachmentFile(p1, v8, true);
            v5.add(AttachmentFile);
            p3.processAttachment(Value, AttachmentFile);
          }
          return;
        }
        catch ( java.io.IOException v11 )
        {
          v12 = v11;
          Log.e(TAG, "Got unexpected exception:" + v11);
          v13 = v5.iterator();
          while ( v13.hasNext() )
          {
            v14 = (java.io.File)v13.next();
            try
            {
              v14.delete();
            }
            catch ( Exception e )
            {
            }
          }
          throw new com.facebook.FacebookException(v12);
        }
      }
    }

    static synchronized java.io.File getAttachmentsDirectory(android.content.Context p0)
    {
      if ( attachmentsDirectory == null )
        attachmentsDirectory = new java.io.File(p0.getCacheDir(), "com.facebook.NativeAppCallAttachmentStore.files");
      return attachmentsDirectory;
    }

    public final void addAttachmentFilesForCall(
            android.content.Context p0,
            java.util.UUID p1,
            java.util.Map<String, java.io.File> p2)
    {
      Validate.notNull(p0, "context");
      Validate.notNull(p1, "callId");
      Validate.containsNoNulls(p2.values(), "mediaAttachmentFiles");
      Validate.containsNoNullOrEmpty(p2.keySet(), "mediaAttachmentFiles");
      this.addAttachments(p0, p1, p2, (com.facebook.NativeAppCallAttachmentStore$ProcessAttachment)new com.facebook.NativeAppCallAttachmentStore$2(this));
    }

    public final void addAttachmentsForCall(
            android.content.Context p0,
            java.util.UUID p1,
            java.util.Map<String, android.graphics.Bitmap> p2)
    {
      Validate.notNull(p0, "context");
      Validate.notNull(p1, "callId");
      Validate.containsNoNulls(p2.values(), "imageAttachments");
      Validate.containsNoNullOrEmpty(p2.keySet(), "imageAttachments");
      this.addAttachments(p0, p1, p2, (com.facebook.NativeAppCallAttachmentStore$ProcessAttachment)new com.facebook.NativeAppCallAttachmentStore$1(this));
    }

    final void cleanupAllAttachments(android.content.Context p0)
    {
      Utility.deleteDirectory(getAttachmentsDirectory(p0));
    }

    public final void cleanupAttachmentsForCall(android.content.Context p0, java.util.UUID p1)
    {
      Utility.deleteDirectory(this.getAttachmentsDirectoryForCall(p1, false));
    }

    final java.io.File ensureAttachmentsDirectoryExists(android.content.Context p0)
    {
      java.io.File AttachmentsDirectory;
      AttachmentsDirectory = getAttachmentsDirectory(p0);
      AttachmentsDirectory.mkdirs();
      return AttachmentsDirectory;
    }

    final java.io.File getAttachmentFile(java.util.UUID p0, String p1, boolean p2)
    {
      java.io.File v4;
      java.io.File v5;
      v4 = null;
      v5 = this.getAttachmentsDirectoryForCall(p0, p2);
      if ( v5 != null )
      {
        try
        {
          return new java.io.File(v5, URLEncoder.encode(p1, "UTF-8"));
        }
        catch ( java.io.UnsupportedEncodingException e )
        {
        }
      }
      return v4;
    }

    final java.io.File getAttachmentsDirectoryForCall(java.util.UUID p0, boolean p1)
    {
      java.io.File v3;
      if ( attachmentsDirectory == null )
        return null;
      v3 = new java.io.File(attachmentsDirectory, p0.toString());
      if ( p1 && !v3.exists() )
        v3.mkdirs();
      return v3;
    }

    public final java.io.File openAttachment(java.util.UUID p0, String p1)
 throws java.io.FileNotFoundException {
      boolean isNullOrEmpty; // RETVAL
    
      isNullOrEmpty = Utility.isNullOrEmpty(p1);
      if ( isNullOrEmpty || p0 == null )
        throw new java.io.FileNotFoundException();
      return this.getAttachmentFile(p0, p1, false);
    }

}
