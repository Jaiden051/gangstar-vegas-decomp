// Decompiled from classes.dex (SourceFile: VASTModelPostValidator.java) via IDA Pro 9.5 Dalvik Decompiler
package com.gameloft.glads.vast.processor;

import android.text.TextUtils;
import com.gameloft.glads.vast.util.VASTLog;
public class VASTModelPostValidator {
    // Fields
    private static java.lang.String TAG;

    // Methods
    public VASTModelPostValidator()
    {
      super();
    }

    public static boolean validate(
            com.gameloft.glads.vast.model.VASTModel p0,
            com.gameloft.glads.vast.processor.VASTMediaPicker p1)
    {
      boolean v2;
      com.gameloft.glads.vast.model.VASTMediaFile v4; // RETVAL
      String Value;
      StringBuilder v6;
      String v7;
      v2 = false;
      VASTLog.d("VASTModelPostValidator", "validate");
      if ( validateModel(p0) )
      {
        if ( p1 != null )
        {
          v4 = p1.pickVideo(p0.getMediaFiles());
          if ( v4 != null )
          {
            Value = v4.getValue();
            if ( !TextUtils.isEmpty(Value) )
            {
              v2 = true;
              p0.setPickedMediaFileURL(Value);
              VASTLog.d("VASTModelPostValidator", "mediaPicker selected mediaFile with URL " + Value);
            }
          }
        }
        else
        {
          VASTLog.w("VASTModelPostValidator", "mediaPicker: We don't have a compatible media file to play.");
        }
        v6 = new StringBuilder("Validator returns: ");
        if ( v2 )
          v7 = "valid";
        else
          v7 = "not valid (no media file)";
        VASTLog.d("VASTModelPostValidator", v6.append(v7).toString());
      }
      else
      {
        VASTLog.d("VASTModelPostValidator", "Validator returns: not valid (invalid model)");
      }
      return v2;
    }

    private static boolean validateModel(com.gameloft.glads.vast.model.VASTModel p0)
    {
      boolean v1;
      java.util.List Impressions; // RETVAL
      java.util.List MediaFiles; // RETVAL
    
      VASTLog.d("VASTModelPostValidator", "validateModel");
      v1 = true;
      Impressions = p0.getImpressions();
      if ( Impressions == null || Impressions.size() == 0 )
        v1 = false;
      MediaFiles = p0.getMediaFiles();
      if ( MediaFiles == null || MediaFiles.size() == 0 )
      {
        VASTLog.d("VASTModelPostValidator", "Validator error: mediaFile list invalid");
        return false;
      }
      return v1;
    }

}
