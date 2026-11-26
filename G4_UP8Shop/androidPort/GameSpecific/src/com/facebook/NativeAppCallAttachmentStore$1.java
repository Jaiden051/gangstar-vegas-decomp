// Decompiled from classes.dex (SourceFile: NativeAppCallAttachmentStore$1.java) via IDA Pro 9.5 Dalvik Decompiler
package com.facebook;

import android.graphics.Bitmap;
import com.facebook.internal.Utility;
class NativeAppCallAttachmentStore$1 implements com.facebook.NativeAppCallAttachmentStore$ProcessAttachment {
    // Fields
    final com.facebook.NativeAppCallAttachmentStore this$0;

    // Methods
    NativeAppCallAttachmentStore$1(com.facebook.NativeAppCallAttachmentStore p0)
    {
      super();
      this.this$0 = p0;
    
    }

    public void processAttachment(android.graphics.Bitmap p0, java.io.File p1)
 throws java.io.FileNotFoundException {
      java.io.FileOutputStream v3;
      v3 = new java.io.FileOutputStream(p1);
      try
      {
        p0.compress(Bitmap.CompressFormat.JPEG, 100, v3);
      }
      finally
      {
        Utility.closeQuietly(v3);
      }
    }

    /* bridge */ public void processAttachment(Object p0, java.io.File p1)
 throws java.io.FileNotFoundException {
      this.processAttachment/* void */((android.graphics.Bitmap)p0, p1);
    }

}
