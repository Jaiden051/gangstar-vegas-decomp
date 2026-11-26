// Decompiled from classes.dex (SourceFile: PlacePickerFragment$3.java) via IDA Pro 9.5 Dalvik Decompiler
package com.facebook.widget;

import com.facebook.LoggingBehavior;
import com.facebook.internal.Logger;
class PlacePickerFragment$3 implements java.lang.Runnable {
    // Fields
    final com.facebook.widget.PlacePickerFragment this$0;

    // Methods
    PlacePickerFragment$3(com.facebook.widget.PlacePickerFragment p0)
    {
      super();
      this.this$0 = p0;
    
    }

    public void run()
    {
      com.facebook.widget.PickerFragment$OnErrorListener v2; // RETVAL
      Object[] v3;
      com.facebook.FacebookException v5;
      com.facebook.widget.PickerFragment$OnErrorListener v6; // RETVAL
      Object[] v7;
      try
      {
        try
        {
          this.this$0.loadData(true);
          return;
        }
        catch ( com.facebook.FacebookException v1 )
        {
          v2 = this.this$0.getOnErrorListener();
          if ( v2 != null )
          {
            v2.onError(this.this$0, v1);
          }
          else
          {
            v3 = new Object[1];
            v3[0] = v1;
            Logger.log(LoggingBehavior.REQUESTS, "PlacePickerFragment", "Error loading data : %s", v3);
          }
          return;
        }
        catch ( Exception v4 )
        {
          v5 = new com.facebook.FacebookException(v4);
        }
      }
      finally
      {
      }
      v6 = this.this$0.getOnErrorListener();
      if ( v6 != null )
      {
        v6.onError(this.this$0, v5);
      }
      else
      {
        v7 = new Object[1];
        v7[0] = v5;
        Logger.log(LoggingBehavior.REQUESTS, "PlacePickerFragment", "Error loading data : %s", v7);
      }
      return;
    }

}
