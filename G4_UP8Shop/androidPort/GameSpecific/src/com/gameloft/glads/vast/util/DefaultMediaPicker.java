// Decompiled from classes.dex (SourceFile: DefaultMediaPicker.java) via IDA Pro 9.5 Dalvik Decompiler
package com.gameloft.glads.vast.util;

import android.text.TextUtils;
import java.util.Collections;
public class DefaultMediaPicker implements com.gameloft.glads.vast.processor.VASTMediaPicker {
    // Fields
    private static java.lang.String TAG;
    private static int maxPixels;
    java.lang.String a;
    private android.content.Context context;
    private int deviceArea;
    private int deviceHeight;
    private int deviceWidth;

    // Methods
    public DefaultMediaPicker(int p0, int p1)
    {
      super();
      this.a = "video/.*(?i)(mp4|3gpp|mp2t|webm|matroska)";
      this.setDeviceWidthHeight(p0, p1);
    }

    public DefaultMediaPicker(android.content.Context p0)
    {
      super();
      this.a = "video/.*(?i)(mp4|3gpp|mp2t|webm|matroska)";
      this.context = p0;
      this.setDeviceWidthHeight();
    }

    /* synthetic */ static int access$100(com.gameloft.glads.vast.util.DefaultMediaPicker p0)
    {
      return p0.deviceArea;
    }

    private com.gameloft.glads.vast.model.VASTMediaFile getBestMatch(
            java.util.List<com.gameloft.glads.vast.model.VASTMediaFile> p0)
    {
      java.util.Iterator v2;
      com.gameloft.glads.vast.model.VASTMediaFile v3;
      VASTLog.d("DefaultMediaPicker", "getBestMatch");
      v2 = p0.iterator();
      while ( v2.hasNext() )
      {
        v3 = (com.gameloft.glads.vast.model.VASTMediaFile)v2.next();
        if ( this.isMediaFileCompatible(v3) )
          return v3;
      }
      return null;
    }

    private boolean isMediaFileCompatible(com.gameloft.glads.vast.model.VASTMediaFile p0)
    {
      return p0.getType().matches(this.a);
    }

    private int prefilterMediaFiles(java.util.List<com.gameloft.glads.vast.model.VASTMediaFile> p0)
    {
      java.util.Iterator v2;
      com.gameloft.glads.vast.model.VASTMediaFile v3;
      java.math.BigInteger Height; // RETVAL
      int v5; // RETVAL
      java.math.BigInteger Width; // RETVAL
      int v7; // RETVAL
    
      v2 = p0.iterator();
      while ( v2.hasNext() )
      {
        v3 = (com.gameloft.glads.vast.model.VASTMediaFile)v2.next();
        if ( TextUtils.isEmpty(v3.getType()) )
        {
          VASTLog.d("DefaultMediaPicker", "Validator error: mediaFile type empty");
          v2.remove();
        }
        else
        {
          Height = v3.getHeight();
          if ( Height != null )
          {
            v5 = Height.intValue();
            if ( v5 > 0 && v5 < 5000 )
            {
              Width = v3.getWidth();
              if ( Width != null )
              {
                v7 = Width.intValue();
                if ( v7 > 0 && v7 < 5000 )
                {
                  if ( TextUtils.isEmpty(v3.getValue()) )
                  {
                    VASTLog.d("DefaultMediaPicker", "Validator error: mediaFile url empty");
                    v2.remove();
                  }
                }
                else
                {
                  VASTLog.d("DefaultMediaPicker", "Validator error: mediaFile width invalid: " + v7);
                  v2.remove();
                }
              }
              else
              {
                VASTLog.d("DefaultMediaPicker", "Validator error: mediaFile width null");
                v2.remove();
              }
            }
            else
            {
              VASTLog.d("DefaultMediaPicker", "Validator error: mediaFile height invalid: " + v5);
              v2.remove();
            }
          }
          else
          {
            VASTLog.d("DefaultMediaPicker", "Validator error: mediaFile height null");
            v2.remove();
          }
        }
      }
      return p0.size();
    }

    private void setDeviceWidthHeight()
    {
      android.util.DisplayMetrics DisplayMetrics; // RETVAL
    
      DisplayMetrics = this.context.getResources().getDisplayMetrics();
      this.deviceWidth = DisplayMetrics.widthPixels;
      this.deviceHeight = DisplayMetrics.heightPixels;
      this.deviceArea = this.deviceWidth * this.deviceHeight;
    }

    private void setDeviceWidthHeight(int p0, int p1)
    {
      this.deviceWidth = p0;
      this.deviceHeight = p1;
      this.deviceArea = this.deviceWidth * this.deviceHeight;
    }

    public com.gameloft.glads.vast.model.VASTMediaFile pickVideo(
            java.util.List<com.gameloft.glads.vast.model.VASTMediaFile> p0)
    {
      if ( p0 == null || this.prefilterMediaFiles(p0) == 0 )
        return null;
      Collections.sort(
        p0,
        (java.util.Comparator)new com.gameloft.glads.vast.util.DefaultMediaPicker$AreaComparator(this, 0));
      return this.getBestMatch(p0);
    }

}
