// Decompiled from classes.dex (SourceFile: ProfilePictureView.java) via IDA Pro 9.5 Dalvik Decompiler
package com.facebook.widget;

import android.graphics.Bitmap;
import android.graphics.BitmapFactory;
import android.view.View;
import android.widget.ImageView;
import com.facebook.LoggingBehavior;
import com.facebook.internal.ImageDownloader;
import com.facebook.internal.ImageRequest;
import com.facebook.internal.Logger;
import com.facebook.internal.Utility;
import com.gameloft.android.GAND.GloftGGSS.R$styleable;
public class ProfilePictureView extends android.widget.FrameLayout {
    // Fields
    private static java.lang.String BITMAP_HEIGHT_KEY;
    private static java.lang.String BITMAP_KEY;
    private static java.lang.String BITMAP_WIDTH_KEY;
    public static int CUSTOM;
    private static boolean IS_CROPPED_DEFAULT_VALUE;
    private static java.lang.String IS_CROPPED_KEY;
    public static int LARGE;
    private static int MIN_SIZE;
    public static int NORMAL;
    private static java.lang.String PENDING_REFRESH_KEY;
    private static java.lang.String PRESET_SIZE_KEY;
    private static java.lang.String PROFILE_ID_KEY;
    public static int SMALL;
    private static java.lang.String SUPER_STATE_KEY;
    public static final java.lang.String TAG;
    private android.graphics.Bitmap customizedDefaultProfilePicture;
    private android.widget.ImageView image;
    private android.graphics.Bitmap imageContents;
    private boolean isCropped;
    private com.facebook.internal.ImageRequest lastRequest;
    private com.facebook.widget.ProfilePictureView$OnErrorListener onErrorListener;
    private int presetSizeType;
    private java.lang.String profileId;
    private int queryHeight;
    private int queryWidth;

    // Methods
    static
    {
      TAG = com.facebook.widget.ProfilePictureView.class.getSimpleName();
    }

    public ProfilePictureView(android.content.Context p0)
    {
      super(p0);
      this.queryHeight = 0;
      this.queryWidth = 0;
      this.isCropped = true;
      this.presetSizeType = -1;
      this.customizedDefaultProfilePicture = null;
      this.initialize(p0);
    }

    public ProfilePictureView(android.content.Context p0, android.util.AttributeSet p1)
    {
      super(p0, p1);
      this.queryHeight = 0;
      this.queryWidth = 0;
      this.isCropped = true;
      this.presetSizeType = -1;
      this.customizedDefaultProfilePicture = null;
      this.initialize(p0);
      this.parseAttributes(p1);
    }

    public ProfilePictureView(android.content.Context p0, android.util.AttributeSet p1, int p2)
    {
      super(p0, p1, p2);
      this.queryHeight = 0;
      this.queryWidth = 0;
      this.isCropped = true;
      this.presetSizeType = -1;
      this.customizedDefaultProfilePicture = null;
      this.initialize(p0);
      this.parseAttributes(p1);
    }

    /* synthetic */ static void access$000(
            com.facebook.widget.ProfilePictureView p0,
            com.facebook.internal.ImageResponse p1)
    {
      p0.processResponse(p1);
    }

    private int getPresetSizeInPixels(boolean p0)
    {
      int v2 = 0;
      int DimensionPixelSize = 0;
      int _sw_1 = 0;
      int _pc = 0;
      _sm:
      while ( true )
      {
        switch ( _pc )
        {
          case 0:
            v2 = 2131361891;
            _sw_1 = (this.presetSizeType);
            if ( (_sw_1 == (-4)) ) { _pc = 1; continue _sm; }
            if ( (_sw_1 == (-3)) ) { _pc = 2; continue _sm; }
            if ( (_sw_1 == (-2)) ) { _pc = 3; continue _sm; }
            if ( (_sw_1 == (-1)) ) { _pc = 4; continue _sm; }
            _pc = 8;
            continue _sm;
          case 1:
            v2 = 2131361892;
            _pc = 5;
            continue _sm;
          case 2:
            _pc = 5;
            continue _sm;
          case 3:
            v2 = 2131361890;
            _pc = 5;
            continue _sm;
          case 4:
            if ( p0 ) { _pc = 5; continue _sm; } else { _pc = 6; continue _sm; }
          case 5:
            DimensionPixelSize = this.getResources().getDimensionPixelSize(v2);
            _pc = 7;
            continue _sm;
          case 6:
            DimensionPixelSize = 0;
            _pc = 7;
            continue _sm;
          case 7:
            _pc = 9;
            continue _sm;
          case 8:
            DimensionPixelSize = 0;
            _pc = 9;
            continue _sm;
          case 9:
            return DimensionPixelSize;
        }
      }
}

    private void initialize(android.content.Context p0)
    {
      this.removeAllViews();
      this.image = new android.widget.ImageView(p0);
      this.image.setLayoutParams(new android.widget.FrameLayout.LayoutParams(-1, -1));
      this.image.setScaleType(ImageView.ScaleType.CENTER_INSIDE);
      this.addView(this.image);
    }

    private void parseAttributes(android.util.AttributeSet p0)
    {
      android.content.res.TypedArray v2;
      v2 = this.getContext().obtainStyledAttributes(p0, R$styleable.ak);
      this.setPresetSize(v2.getInt(0, -1));
      this.isCropped = v2.getBoolean(1, true);
      v2.recycle();
    }

    private void processResponse(com.facebook.internal.ImageResponse p0)
    {
      android.graphics.Bitmap Bitmap;
      Exception Error; // RETVAL
      com.facebook.widget.ProfilePictureView$OnErrorListener onErrorListener;
      if ( p0.getRequest() == this.lastRequest )
      {
        this.lastRequest = null;
        Bitmap = p0.getBitmap();
        Error = p0.getError();
        if ( Error != null )
        {
          onErrorListener = this.onErrorListener;
          if ( onErrorListener != null )
            onErrorListener.onError(new com.facebook.FacebookException("Error in downloading profile picture for profileId: "
                                                                     + this.getProfileId(), Error));
          else
            Logger.log(LoggingBehavior.REQUESTS, 6, TAG, Error.toString());
        }
        else if ( Bitmap != null )
        {
          this.setImageBitmap(Bitmap);
          if ( p0.isCachedRedirect() )
            this.sendImageRequest(false);
        }
      }
    }

    private void refreshImage(boolean p0)
    {
      boolean updated;
      updated = this.updateImageQueryParameters();
      if ( this.profileId != null && this.profileId.length() != 0 && (this.queryWidth != 0 || this.queryHeight != 0) )
      {
        if ( updated || p0 )
          this.sendImageRequest(true);
      }
      else
      {
        this.setBlankProfilePicture();
      }
    }

    private void sendImageRequest(boolean p0)
    {
      com.facebook.internal.ImageRequest v2;
      try
      {
        v2 = new com.facebook.internal.ImageRequest$Builder(this.getContext(), ImageRequest.getProfilePictureUrl(
                                                                                 this.profileId,
                                                                                 this.queryWidth,
                                                                                 this.queryHeight)).setAllowCachedRedirects(p0).setCallerTag(this).setCallback((com.facebook.internal.ImageRequest$Callback)new com.facebook.widget.ProfilePictureView$1(this)).build();
        if ( this.lastRequest != null )
          ImageDownloader.cancelRequest(this.lastRequest);
        this.lastRequest = v2;
        ImageDownloader.downloadAsync(v2);
      }
      catch ( java.net.URISyntaxException v3 )
      {
        Logger.log(LoggingBehavior.REQUESTS, 6, TAG, v3.toString());
      }
    }

    private void setBlankProfilePicture()
    {
      int v1;
      if ( this.customizedDefaultProfilePicture != null )
      {
        this.updateImageQueryParameters();
        this.setImageBitmap(Bitmap.createScaledBitmap(
                              this.customizedDefaultProfilePicture,
                              this.queryWidth,
                              this.queryHeight,
                              false));
      }
      else
      {
        if ( this.isCropped() )
          v1 = 2130837552;
        else
          v1 = 2130837551;
        this.setImageBitmap(BitmapFactory.decodeResource(this.getResources(), v1));
      }
    }

    private void setImageBitmap(android.graphics.Bitmap p0)
    {
      if ( this.image != null && p0 != null )
      {
        this.imageContents = p0;
        this.image.setImageBitmap(p0);
      }
    }

    private boolean updateImageQueryParameters()
    {
      boolean v1;
      int Height;
      int Width;
      int PresetSizeInPixels; // RETVAL
      int v6;
      int v7;
      int v8;
      v1 = false;
      Height = this.getHeight();
      Width = this.getWidth();
      if ( Width > 0 && Height > 0 )
      {
        PresetSizeInPixels = this.getPresetSizeInPixels(false);
        v6 = PresetSizeInPixels;
        if ( PresetSizeInPixels != 0 )
          Height = PresetSizeInPixels;
        else
          v6 = Width;
        if ( v6 > Height )
        {
          if ( this.isCropped() )
            v8 = Height;
          else
            v8 = 0;
          v6 = v8;
          v7 = Height;
        }
        else if ( this.isCropped() )
        {
          v7 = v6;
        }
        else
        {
          v7 = 0;
        }
        if ( v6 != this.queryWidth || v7 != this.queryHeight )
          v1 = true;
        this.queryWidth = v6;
        this.queryHeight = v7;
      }
      return v1;
    }

    public final com.facebook.widget.ProfilePictureView$OnErrorListener getOnErrorListener()
    {
      return this.onErrorListener;
    }

    public final int getPresetSize()
    {
      return this.presetSizeType;
    }

    public final String getProfileId()
    {
      return this.profileId;
    }

    public final boolean isCropped()
    {
      return this.isCropped;
    }

    protected void onDetachedFromWindow()
    {
      super.onDetachedFromWindow();
      this.lastRequest = null;
    }

    protected void onLayout(boolean p0, int p1, int p2, int p3, int p4)
    {
      super.onLayout(p0, p1, p2, p3, p4);
      this.refreshImage(false);
    }

    protected void onMeasure(int p0, int p1)
    {
      int v3;
      android.view.ViewGroup.LayoutParams LayoutParams;
      int v5;
      int Size;
      int v7;
      int PresetSizeInPixels;
      v3 = 1;
      LayoutParams = this.getLayoutParams();
      v5 = 0;
      Size = View.MeasureSpec.getSize(p1);
      v7 = View.MeasureSpec.getSize(p0);
      if ( View.MeasureSpec.getMode(p1) != 0x40000000 && LayoutParams.height == -2 )
      {
        Size = this.getPresetSizeInPixels(true);
        p1 = View.MeasureSpec.makeMeasureSpec(Size, 0x40000000);
        v5 = 1;
      }
      if ( View.MeasureSpec.getMode(p0) == 0x40000000 || LayoutParams.width != -2 )
      {
        v3 = v5;
        PresetSizeInPixels = v7;
      }
      else
      {
        PresetSizeInPixels = this.getPresetSizeInPixels(true);
        p0 = View.MeasureSpec.makeMeasureSpec(PresetSizeInPixels, 0x40000000);
      }
      if ( v3 != 0 )
      {
        this.setMeasuredDimension(PresetSizeInPixels, Size);
        this.measureChildren(p0, p1);
      }
      else
      {
        super.onMeasure(p0, p1);
      }
    }

    protected void onRestoreInstanceState(android.os.Parcelable p0)
    {
      android.os.Bundle v2;
      if ( p0.getClass() == android.os.Bundle.class )
      {
        v2 = (android.os.Bundle)p0;
        super.onRestoreInstanceState(v2.getParcelable("ProfilePictureView_superState"));
        this.profileId = v2.getString("ProfilePictureView_profileId");
        this.presetSizeType = v2.getInt("ProfilePictureView_presetSize");
        this.isCropped = v2.getBoolean("ProfilePictureView_isCropped");
        this.queryWidth = v2.getInt("ProfilePictureView_width");
        this.queryHeight = v2.getInt("ProfilePictureView_height");
        this.setImageBitmap((android.graphics.Bitmap)v2.getParcelable("ProfilePictureView_bitmap"));
        if ( v2.getBoolean("ProfilePictureView_refresh") )
          this.refreshImage(true);
      }
      else
      {
        super.onRestoreInstanceState(p0);
      }
    }

    protected android.os.Parcelable onSaveInstanceState()
    {
      android.os.Bundle v1;
      v1 = new android.os.Bundle();
      v1.putParcelable("ProfilePictureView_superState", super.onSaveInstanceState());
      v1.putString("ProfilePictureView_profileId", this.profileId);
      v1.putInt("ProfilePictureView_presetSize", this.presetSizeType);
      v1.putBoolean("ProfilePictureView_isCropped", this.isCropped);
      v1.putParcelable("ProfilePictureView_bitmap", this.imageContents);
      v1.putInt("ProfilePictureView_width", this.queryWidth);
      v1.putInt("ProfilePictureView_height", this.queryHeight);
      v1.putBoolean("ProfilePictureView_refresh", this.lastRequest != null);
      return v1;
    }

    public final void setCropped(boolean p0)
    {
      this.isCropped = p0;
      this.refreshImage(false);
    }

    public final void setDefaultProfilePicture(android.graphics.Bitmap p0)
    {
      this.customizedDefaultProfilePicture = p0;
    }

    public final void setOnErrorListener(com.facebook.widget.ProfilePictureView$OnErrorListener p0)
    {
      this.onErrorListener = p0;
    }

    public final void setPresetSize(int p0)
    {
      switch ( p0 )
      {
        case -4:
        case -3:
        case -2:
        case -1:
          this.presetSizeType = p0;
          this.requestLayout();
          return;
        default:
          throw new IllegalArgumentException("Must use a predefined preset size");
      }
    }

    public final void setProfileId(String p0)
    {
      boolean v2;
      v2 = false;
      if ( Utility.isNullOrEmpty(this.profileId) || !this.profileId.equalsIgnoreCase(p0) )
      {
        this.setBlankProfilePicture();
        v2 = true;
      }
      this.profileId = p0;
      this.refreshImage(v2);
    }

}
