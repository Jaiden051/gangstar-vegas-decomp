// Decompiled from classes.dex (SourceFile: LikeView.java) via IDA Pro 9.5 Dalvik Decompiler
package com.facebook.widget;

import com.facebook.internal.LikeBoxCountView$LikeBoxCountViewCaretPosition;
import android.support.v4.content.LocalBroadcastManager;
import com.facebook.internal.LikeActionController;
import com.facebook.internal.LikeBoxCountView;
import com.facebook.internal.Utility;
import com.gameloft.android.GAND.GloftGGSS.R$styleable;
public class LikeView extends android.widget.FrameLayout {
    // Fields
    private static int NO_FOREGROUND_COLOR;
    private com.facebook.widget.LikeView$AuxiliaryViewPosition auxiliaryViewPosition;
    private android.content.BroadcastReceiver broadcastReceiver;
    private android.widget.LinearLayout containerView;
    private com.facebook.widget.LikeView$LikeActionControllerCreationCallback creationCallback;
    private int edgePadding;
    private int foregroundColor;
    private com.facebook.widget.LikeView$HorizontalAlignment horizontalAlignment;
    private int internalPadding;
    private com.facebook.internal.LikeActionController likeActionController;
    private com.facebook.internal.LikeBoxCountView likeBoxCountView;
    private com.facebook.internal.LikeButton likeButton;
    private com.facebook.widget.LikeView$Style likeViewStyle;
    private java.lang.String objectId;
    private com.facebook.widget.LikeView$OnErrorListener onErrorListener;
    private android.widget.TextView socialSentenceView;

    // Methods
    public LikeView(android.content.Context p0)
    {
      super(p0);
      this.likeViewStyle = LikeView$Style.DEFAULT;
      this.horizontalAlignment = LikeView$HorizontalAlignment.DEFAULT;
      this.auxiliaryViewPosition = LikeView$AuxiliaryViewPosition.DEFAULT;
      this.foregroundColor = -1;
      this.initialize(p0);
    }

    public LikeView(android.content.Context p0, android.util.AttributeSet p1)
    {
      super(p0, p1);
      this.likeViewStyle = LikeView$Style.DEFAULT;
      this.horizontalAlignment = LikeView$HorizontalAlignment.DEFAULT;
      this.auxiliaryViewPosition = LikeView$AuxiliaryViewPosition.DEFAULT;
      this.foregroundColor = -1;
      this.parseAttributes(p1);
      this.initialize(p0);
    }

    /* synthetic */ static void access$1000(
            com.facebook.widget.LikeView p0,
            com.facebook.internal.LikeActionController p1)
    {
      p0.associateWithLikeActionController(p1);
    }

    /* synthetic */ static com.facebook.widget.LikeView$LikeActionControllerCreationCallback access$1102(
            com.facebook.widget.LikeView p0,
            com.facebook.widget.LikeView$LikeActionControllerCreationCallback p1)
    {
      p0.creationCallback = p1;
      return p1;
    }

    /* synthetic */ static void access$300(com.facebook.widget.LikeView p0)
    {
      p0.toggleLike();
    }

    /* synthetic */ static String access$600(com.facebook.widget.LikeView p0)
    {
      return p0.objectId;
    }

    /* synthetic */ static void access$700(com.facebook.widget.LikeView p0)
    {
      p0.updateLikeStateAndLayout();
    }

    /* synthetic */ static com.facebook.widget.LikeView$OnErrorListener access$800(
            com.facebook.widget.LikeView p0)
    {
      return p0.onErrorListener;
    }

    /* synthetic */ static void access$900(com.facebook.widget.LikeView p0, String p1)
    {
      p0.setObjectIdForced(p1);
    }

    private void associateWithLikeActionController(com.facebook.internal.LikeActionController p0)
    {
      android.support.v4.content.LocalBroadcastManager Instance; // RETVAL
      android.content.IntentFilter v3;
      this.likeActionController = p0;
      this.broadcastReceiver = new com.facebook.widget.LikeView$LikeControllerBroadcastReceiver(this, null);
      Instance = LocalBroadcastManager.getInstance(this.getContext());
      v3 = new android.content.IntentFilter();
      v3.addAction("com.facebook.sdk.LikeActionController.UPDATED");
      v3.addAction("com.facebook.sdk.LikeActionController.DID_ERROR");
      v3.addAction("com.facebook.sdk.LikeActionController.DID_RESET");
      Instance.registerReceiver(this.broadcastReceiver, v3);
    }

    private android.os.Bundle getAnalyticsParameters()
    {
      android.os.Bundle v1;
      v1 = new android.os.Bundle();
      v1.putString("style", this.likeViewStyle.toString());
      v1.putString("auxiliary_position", this.auxiliaryViewPosition.toString());
      v1.putString("horizontal_alignment", this.horizontalAlignment.toString());
      v1.putString("object_id", Utility.coerceValueIfNullOrEmpty(this.objectId, ""));
      return v1;
    }

    public static boolean handleOnActivityResult(
            android.content.Context p0,
            int p1,
            int p2,
            android.content.Intent p3)
    {
      return LikeActionController.handleOnActivityResult(p0, p1, p2, p3);
    }

    private void initialize(android.content.Context p0)
    {
      this.edgePadding = this.getResources().getDimensionPixelSize(2131361876);
      this.internalPadding = this.getResources().getDimensionPixelSize(2131361877);
      if ( this.foregroundColor == -1 )
        this.foregroundColor = this.getResources().getColor(2131230770);
      this.setBackgroundColor(0);
      this.containerView = new android.widget.LinearLayout(p0);
      this.containerView.setLayoutParams(new android.widget.FrameLayout.LayoutParams(-2, -2));
      this.initializeLikeButton(p0);
      this.initializeSocialSentenceView(p0);
      this.initializeLikeCountView(p0);
      this.containerView.addView(this.likeButton);
      this.containerView.addView(this.socialSentenceView);
      this.containerView.addView(this.likeBoxCountView);
      this.addView(this.containerView);
      this.setObjectIdForced(this.objectId);
      this.updateLikeStateAndLayout();
    }

    private void initializeLikeButton(android.content.Context p0)
    {
      com.facebook.internal.LikeButton v2;
      boolean v3;
      v2 = null;
      v3 = this.likeActionController != null && this.likeActionController.isObjectLiked();
      this.likeButton = (v2 = new com.facebook.internal.LikeButton(p0, v3));
      this.likeButton.setOnClickListener((android.view.View.OnClickListener)new com.facebook.widget.LikeView$1(this));
      this.likeButton.setLayoutParams(new android.widget.LinearLayout.LayoutParams(-2, -2));
    }

    private void initializeLikeCountView(android.content.Context p0)
    {
      this.likeBoxCountView = new com.facebook.internal.LikeBoxCountView(p0);
      this.likeBoxCountView.setLayoutParams(new android.widget.LinearLayout.LayoutParams(-1, -1));
    }

    private void initializeSocialSentenceView(android.content.Context p0)
    {
      this.socialSentenceView = new android.widget.TextView(p0);
      this.socialSentenceView.setTextSize(0, this.getResources().getDimension(2131361875));
      this.socialSentenceView.setMaxLines(2);
      this.socialSentenceView.setTextColor(this.foregroundColor);
      this.socialSentenceView.setGravity(17);
      this.socialSentenceView.setLayoutParams(new android.widget.LinearLayout.LayoutParams(-2, -1));
    }

    private void parseAttributes(android.util.AttributeSet p0)
    {
      android.content.res.TypedArray v2; // RETVAL
      android.content.res.TypedArray v3;
      if ( p0 != null && this.getContext() != null )
      {
        v2 = this.getContext().obtainStyledAttributes(p0, R$styleable.M);
        v3 = v2;
        if ( v2 != null )
        {
          this.objectId = Utility.coerceValueIfNullOrEmpty(v2.getString(1), null);
          this.likeViewStyle = LikeView$Style.fromInt(v3.getInt(2, LikeView$Style.access$000(LikeView$Style.DEFAULT)));
          if ( this.likeViewStyle == null )
            throw new IllegalArgumentException("Unsupported value for LikeView 'style'");
          this.auxiliaryViewPosition = LikeView$AuxiliaryViewPosition.fromInt(
                                         v3.getInt(3, LikeView$AuxiliaryViewPosition.access$100(LikeView$AuxiliaryViewPosition.DEFAULT)));
          if ( this.auxiliaryViewPosition == null )
            throw new IllegalArgumentException("Unsupported value for LikeView 'auxiliary_view_position'");
          this.horizontalAlignment = LikeView$HorizontalAlignment.fromInt(
                                       v3.getInt(4, LikeView$HorizontalAlignment.access$200(LikeView$HorizontalAlignment.DEFAULT)));
          if ( this.horizontalAlignment == null )
            throw new IllegalArgumentException("Unsupported value for LikeView 'horizontal_alignment'");
          this.foregroundColor = v3.getColor(0, -1);
          v3.recycle();
        }
      }
    }

    private void setObjectIdForced(String p0)
    {
      this.tearDownObjectAssociations();
      this.objectId = p0;
      if ( !Utility.isNullOrEmpty(p0) )
      {
        this.creationCallback = new com.facebook.widget.LikeView$LikeActionControllerCreationCallback(this, null);
        LikeActionController.getControllerForObjectId(
          this.getContext(),
          p0,
          (com.facebook.internal.LikeActionController$CreationCallback)this.creationCallback);
      }
    }

    private void tearDownObjectAssociations()
    {
      if ( this.broadcastReceiver != null )
      {
        LocalBroadcastManager.getInstance(this.getContext()).unregisterReceiver(this.broadcastReceiver);
        this.broadcastReceiver = null;
      }
      if ( this.creationCallback != null )
      {
        this.creationCallback.cancel();
        this.creationCallback = null;
      }
      this.likeActionController = null;
    }

    private void toggleLike()
    {
      android.content.Context Context; // RETVAL
      android.app.Activity v2;
      if ( this.likeActionController != null )
      {
        Context = this.getContext();
        if ( Context instanceof android.app.Activity
          || Context instanceof android.content.ContextWrapper
          && (com.gameloft.android.DecompRT.comma((Context = ((android.content.ContextWrapper)Context).getBaseContext()), (Context instanceof android.app.Activity))) )
        {
          v2 = (android.app.Activity)Context;
        }
        else
        {
          v2 = null;
        }
        if ( v2 != null )
          this.likeActionController.toggleLike(v2, this.getAnalyticsParameters());
      }
    }

    private void updateBoxCountCaretPosition()
    {
      com.facebook.internal.LikeBoxCountView likeBoxCountView = null;
      com.facebook.internal.LikeBoxCountView$LikeBoxCountViewCaretPosition v2 = null;
      int _sw_1 = 0;
      int _pc = 0;
      _sm:
      while ( true )
      {
        switch ( _pc )
        {
          case 0:
            _sw_1 = (LikeView$2.$SwitchMap$com$facebook$widget$LikeView$AuxiliaryViewPosition[this.auxiliaryViewPosition.ordinal()]);
            if ( (_sw_1 == (1)) ) { _pc = 1; continue _sm; }
            if ( (_sw_1 == (2)) ) { _pc = 2; continue _sm; }
            if ( (_sw_1 == (3)) ) { _pc = 3; continue _sm; }
            _pc = 5;
            continue _sm;
          case 1:
            likeBoxCountView = this.likeBoxCountView;
            v2 = LikeBoxCountView$LikeBoxCountViewCaretPosition.BOTTOM;
            _pc = 4;
            continue _sm;
          case 2:
            likeBoxCountView = this.likeBoxCountView;
            v2 = LikeBoxCountView$LikeBoxCountViewCaretPosition.TOP;
            _pc = 4;
            continue _sm;
          case 3:
            likeBoxCountView = this.likeBoxCountView;
            if ( this.horizontalAlignment == LikeView$HorizontalAlignment.RIGHT )
            v2 = LikeBoxCountView$LikeBoxCountViewCaretPosition.RIGHT;
            else
            v2 = LikeBoxCountView$LikeBoxCountViewCaretPosition.LEFT;
            _pc = 4;
            continue _sm;
          case 4:
            likeBoxCountView.setCaretPosition(v2);
            _pc = 6;
            continue _sm;
          case 5:
            return;
          case 6:
            return;
        }
      }
}

    private void updateLayout()
    {
      int v1;
      android.widget.FrameLayout.LayoutParams v2;
      android.widget.LinearLayout.LayoutParams v3;
      int v4;
      android.view.View socialSentenceView;
      android.widget.LinearLayout containerView;
      v1 = 1;
      v2 = (android.widget.FrameLayout.LayoutParams)this.containerView.getLayoutParams();
      v3 = (android.widget.LinearLayout.LayoutParams)this.likeButton.getLayoutParams();
      if ( this.horizontalAlignment == LikeView$HorizontalAlignment.LEFT )
      {
        v4 = 3;
      }
      else if ( this.horizontalAlignment == LikeView$HorizontalAlignment.CENTER )
      {
        v4 = 1;
      }
      else
      {
        v4 = 5;
      }
      v2.gravity = v4 | 0x30;
      v3.gravity = v4;
      this.socialSentenceView.setVisibility(8);
      this.likeBoxCountView.setVisibility(8);
      if ( this.likeViewStyle == LikeView$Style.STANDARD
        && this.likeActionController != null
        && !Utility.isNullOrEmpty(this.likeActionController.getSocialSentence()) )
      {
        socialSentenceView = this.socialSentenceView;
      }
      else
      {
        if ( this.likeViewStyle != LikeView$Style.BOX_COUNT
          || this.likeActionController == null
          || Utility.isNullOrEmpty(this.likeActionController.getLikeCountString()) )
        {
          return;
        }
        this.updateBoxCountCaretPosition();
        socialSentenceView = this.likeBoxCountView;
      }
      socialSentenceView.setVisibility(0);
      ((android.widget.LinearLayout.LayoutParams)socialSentenceView.getLayoutParams()).gravity = v4;
      containerView = this.containerView;
      if ( this.auxiliaryViewPosition == LikeView$AuxiliaryViewPosition.INLINE )
        v1 = 0;
      containerView.setOrientation(v1);
      if ( this.auxiliaryViewPosition == LikeView$AuxiliaryViewPosition.TOP
        || this.auxiliaryViewPosition == LikeView$AuxiliaryViewPosition.INLINE
        && this.horizontalAlignment == LikeView$HorizontalAlignment.RIGHT )
      {
        this.containerView.removeView(this.likeButton);
        this.containerView.addView(this.likeButton);
      }
      else
      {
        this.containerView.removeView(socialSentenceView);
        this.containerView.addView(socialSentenceView);
      }
      switch ( LikeView$2.$SwitchMap$com$facebook$widget$LikeView$AuxiliaryViewPosition[this.auxiliaryViewPosition.ordinal()] )
      {
        case 1:
          socialSentenceView.setPadding(this.edgePadding, this.edgePadding, this.edgePadding, this.internalPadding);
          break;
        case 2:
          socialSentenceView.setPadding(this.edgePadding, this.internalPadding, this.edgePadding, this.edgePadding);
          break;
        case 3:
          if ( this.horizontalAlignment == LikeView$HorizontalAlignment.RIGHT )
            socialSentenceView.setPadding(this.edgePadding, this.edgePadding, this.internalPadding, this.edgePadding);
          else
            socialSentenceView.setPadding(this.internalPadding, this.edgePadding, this.edgePadding, this.edgePadding);
          break;
        default:
          return;
      }
    }

    private void updateLikeStateAndLayout()
    {
      if ( this.likeActionController != null )
      {
        this.likeButton.setLikeState(this.likeActionController.isObjectLiked());
        this.socialSentenceView.setText(this.likeActionController.getSocialSentence());
        this.likeBoxCountView.setText(this.likeActionController.getLikeCountString());
      }
      else
      {
        this.likeButton.setLikeState(false);
        this.socialSentenceView.setText(null);
        this.likeBoxCountView.setText(null);
      }
      this.updateLayout();
    }

    public com.facebook.widget.LikeView$OnErrorListener getOnErrorListener()
    {
      return this.onErrorListener;
    }

    protected void onDetachedFromWindow()
    {
      this.setObjectId(null);
      super.onDetachedFromWindow();
    }

    public void setAuxiliaryViewPosition(com.facebook.widget.LikeView$AuxiliaryViewPosition p0)
    {
      if ( p0 == null )
        p0 = LikeView$AuxiliaryViewPosition.DEFAULT;
      if ( this.auxiliaryViewPosition != p0 )
      {
        this.auxiliaryViewPosition = p0;
        this.updateLayout();
      }
    }

    public void setForegroundColor(int p0)
    {
      if ( this.foregroundColor != p0 )
        this.socialSentenceView.setTextColor(p0);
    }

    public void setHorizontalAlignment(com.facebook.widget.LikeView$HorizontalAlignment p0)
    {
      if ( p0 == null )
        p0 = LikeView$HorizontalAlignment.DEFAULT;
      if ( this.horizontalAlignment != p0 )
      {
        this.horizontalAlignment = p0;
        this.updateLayout();
      }
    }

    public void setLikeViewStyle(com.facebook.widget.LikeView$Style p0)
    {
      if ( p0 == null )
        p0 = LikeView$Style.DEFAULT;
      if ( this.likeViewStyle != p0 )
      {
        this.likeViewStyle = p0;
        this.updateLayout();
      }
    }

    public void setObjectId(String p0)
    {
      String v2;
      v2 = Utility.coerceValueIfNullOrEmpty(p0, null);
      if ( !Utility.areObjectsEqual(v2, this.objectId) )
      {
        this.setObjectIdForced(v2);
        this.updateLikeStateAndLayout();
      }
    }

    public void setOnErrorListener(com.facebook.widget.LikeView$OnErrorListener p0)
    {
      this.onErrorListener = p0;
    }

}
