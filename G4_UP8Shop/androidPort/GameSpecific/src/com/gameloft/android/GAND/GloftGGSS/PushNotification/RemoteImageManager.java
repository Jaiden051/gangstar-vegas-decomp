// Decompiled from classes.dex (SourceFile: RemoteImageManager.java) via IDA Pro 9.5 Dalvik Decompiler
package com.gameloft.android.GAND.GloftGGSS.PushNotification;

import android.graphics.BitmapFactory;
public class RemoteImageManager {
    // Fields
    private static android.graphics.Bitmap a;

    // Methods
    static
    {
      a = null;
    }

    public RemoteImageManager()
    {
      super();
    }

    public static android.graphics.Bitmap GetAsset()
    {
      return a;
    }

    public static boolean GetLocalAsset(android.content.Context p0)
    {
      int Identifier = 0;
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
              a = null;
              _ehCatchPc = 5;
              Identifier = p0.getResources().getIdentifier(SimplifiedAndroidUtils.l, "raw", p0.getPackageName());
              _ehCatchPc = 1;
              a = BitmapFactory.decodeResource(p0.getResources(), Identifier);
              return a != null && Identifier > 0;
            case 1:
              _ehCatchPc = 5;
              _ehCaught = _ehEx; _ehEx = null;
              if ( !(_ehCaught instanceof Exception) ) { _pc = 3; continue _sm; }
              _pc = 2;
              continue _sm;
            case 2:
              a = null;
              return a != null && Identifier > 0;
            case 3:
              throw com.gameloft.android.DecompRT.sneakyThrow(_ehCaught);
            case 5:
              _ehCatchPc = -1;
              _ehCaught = _ehEx; _ehEx = null;
              if ( !(_ehCaught instanceof Exception) ) { _pc = 6; continue _sm; }
              Identifier = 0;
              _pc = 2;
              continue _sm;
            case 6:
              throw com.gameloft.android.DecompRT.sneakyThrow(_ehCaught);
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

}
