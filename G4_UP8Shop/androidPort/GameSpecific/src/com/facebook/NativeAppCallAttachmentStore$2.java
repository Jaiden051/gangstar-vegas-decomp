// Decompiled from classes.dex (SourceFile: NativeAppCallAttachmentStore$2.java) via IDA Pro 9.5 Dalvik Decompiler
package com.facebook;

import com.facebook.internal.Utility;
class NativeAppCallAttachmentStore$2 implements com.facebook.NativeAppCallAttachmentStore$ProcessAttachment<java.io.File> {
    // Fields
    final com.facebook.NativeAppCallAttachmentStore this$0;

    // Methods
    NativeAppCallAttachmentStore$2(com.facebook.NativeAppCallAttachmentStore p0)
    {
      super();
      this.this$0 = p0;
    
    }

    public void processAttachment(java.io.File p0, java.io.File p1)
    {
      java.io.FileOutputStream v3 = null;
      java.io.FileInputStream v4 = null;
      byte[] i = null;
      int v6 = 0; // RETVAL
      Throwable _cv_1 = null;
      int _ehCatchPc = -1;
      Throwable _ehEx = null;
      Throwable _ehCaught = null;
      int _pc = 0;
      _sm:
      while ( true )
      {
        try
        {
          switch ( _pc )
          {
            case 0:
              v3 = new java.io.FileOutputStream(p1);
              _ehCatchPc = 1;
              v4 = new java.io.FileInputStream(p0);
              _ehCatchPc = -1;
              _pc = 4;
              continue _sm;
            case 1:
              _ehCatchPc = -1;
              _ehCaught = _ehEx; _ehEx = null;
              if ( !(_ehCaught instanceof Throwable) ) { _pc = 3; continue _sm; }
              _cv_1 = (Throwable)_ehCaught;
              v4 = null;
              _pc = 2;
              continue _sm;
            case 2:
              Utility.closeQuietly(v3);
              Utility.closeQuietly(v4);
              throw _cv_1;
            case 3:
              throw com.gameloft.android.DecompRT.sneakyThrow(_ehCaught);
            case 4:
              try
              {
              for ( i = new byte[1024]; ; v3.write(i, 0, v6) )
              {
              v6 = v4.read(i);
              if ( v6 <= 0 )
              break;
              }
              Utility.closeQuietly(v3);
              Utility.closeQuietly(v4);
              return;
              }
              catch ( Throwable v7 )
              {
              { _pc = 2; continue _sm; }
              }
              

          }
        }
        catch ( Throwable _ehT )
        {
          if ( _ehCatchPc >= 0 )
          {
            _ehEx = _ehT;
            _pc = _ehCatchPc;
            continue _sm;
          }
          throw com.gameloft.android.DecompRT.sneakyThrow(_ehT);
        }
      }
}

    /* bridge */ public void processAttachment(Object p0, java.io.File p1)
    {
      this.processAttachment/* void */((java.io.File)p0, p1);
    }

}
