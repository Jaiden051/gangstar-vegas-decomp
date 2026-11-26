// Decompiled from classes.dex (SourceFile: ToolTipPopup.java) via IDA Pro 9.5 Dalvik Decompiler
package com.facebook.widget;

import android.view.View;
public class ToolTipPopup {
    // Fields
    public static long DEFAULT_POPUP_DISPLAY_TIME;
    private final java.lang.ref.WeakReference mAnchorViewRef;
    private final android.content.Context mContext;
    private long mNuxDisplayTime;
    private com.facebook.widget.ToolTipPopup$PopupContentView mPopupContent;
    private android.widget.PopupWindow mPopupWindow;
    private final android.view.ViewTreeObserver.OnScrollChangedListener mScrollListener;
    private com.facebook.widget.ToolTipPopup$Style mStyle;
    private final java.lang.String mText;

    // Methods
    public ToolTipPopup(String p0, android.view.View p1)
    {
      super();
      this.mStyle = ToolTipPopup$Style.BLUE;
      this.mNuxDisplayTime = 6000;
      this.mScrollListener = (android.view.ViewTreeObserver.OnScrollChangedListener)new com.facebook.widget.ToolTipPopup$1(this);
      this.mText = p0;
      this.mAnchorViewRef = new java.lang.ref.WeakReference(p1);
      this.mContext = p1.getContext();
    }

    /* synthetic */ static java.lang.ref.WeakReference access$000(com.facebook.widget.ToolTipPopup p0)
    {
      return p0.mAnchorViewRef;
    }

    /* synthetic */ static android.widget.PopupWindow access$100(com.facebook.widget.ToolTipPopup p0)
    {
      return p0.mPopupWindow;
    }

    /* synthetic */ static com.facebook.widget.ToolTipPopup$PopupContentView access$200(
            com.facebook.widget.ToolTipPopup p0)
    {
      return p0.mPopupContent;
    }

    private void registerObserver()
    {
      this.unregisterObserver();
      if ( this.mAnchorViewRef.get() != null )
        ((android.view.View)this.mAnchorViewRef.get()).getViewTreeObserver().addOnScrollChangedListener(this.mScrollListener);
    }

    private void unregisterObserver()
    {
      if ( this.mAnchorViewRef.get() != null )
        ((android.view.View)this.mAnchorViewRef.get()).getViewTreeObserver().removeOnScrollChangedListener(this.mScrollListener);
    }

    private void updateArrows()
    {
      if ( this.mPopupWindow != null && this.mPopupWindow.isShowing() )
      {
        if ( this.mPopupWindow.isAboveAnchor() )
          this.mPopupContent.showBottomArrow();
        else
          this.mPopupContent.showTopArrow();
      }
    }

    public void dismiss()
    {
      this.unregisterObserver();
      if ( this.mPopupWindow != null )
        this.mPopupWindow.dismiss();
    }

    public void setNuxDisplayTime(long p0)
    {
      this.mNuxDisplayTime = p0;
    }

    public void setStyle(com.facebook.widget.ToolTipPopup$Style p0)
    {
      this.mStyle = p0;
    }

    public void show()
    {
      android.view.View DecorView;
      int Width;
      int Height;
      if ( this.mAnchorViewRef.get() != null )
      {
        this.mPopupContent = new com.facebook.widget.ToolTipPopup$PopupContentView(this, this.mContext);
        ((android.widget.TextView)this.mPopupContent.findViewById(2131427388)).setText(this.mText);
        if ( this.mStyle == ToolTipPopup$Style.BLUE )
        {
          ToolTipPopup$PopupContentView.access$300(this.mPopupContent).setBackgroundResource(2130837557);
          ToolTipPopup$PopupContentView.access$400(this.mPopupContent).setImageResource(2130837558);
          ToolTipPopup$PopupContentView.access$500(this.mPopupContent).setImageResource(2130837559);
          ToolTipPopup$PopupContentView.access$600(this.mPopupContent).setImageResource(2130837560);
        }
        else
        {
          ToolTipPopup$PopupContentView.access$300(this.mPopupContent).setBackgroundResource(2130837553);
          ToolTipPopup$PopupContentView.access$400(this.mPopupContent).setImageResource(2130837554);
          ToolTipPopup$PopupContentView.access$500(this.mPopupContent).setImageResource(2130837555);
          ToolTipPopup$PopupContentView.access$600(this.mPopupContent).setImageResource(2130837556);
        }
        DecorView = ((android.app.Activity)this.mContext).getWindow().getDecorView();
        Width = DecorView.getWidth();
        Height = DecorView.getHeight();
        this.registerObserver();
        this.mPopupContent.onMeasure(View.MeasureSpec.makeMeasureSpec(Width, 0x80000000), View.MeasureSpec.makeMeasureSpec(
                                                                                            Height,
                                                                                            0x80000000));
        this.mPopupWindow = new android.widget.PopupWindow(this.mPopupContent, this.mPopupContent.getMeasuredWidth(), this.mPopupContent.getMeasuredHeight());
        this.mPopupWindow.showAsDropDown((android.view.View)this.mAnchorViewRef.get());
        this.updateArrows();
        if ( this.mNuxDisplayTime > 0 )
          this.mPopupContent.postDelayed((Runnable)new com.facebook.widget.ToolTipPopup$2(this), this.mNuxDisplayTime);
        this.mPopupWindow.setTouchable(true);
        this.mPopupContent.setOnClickListener((android.view.View.OnClickListener)new com.facebook.widget.ToolTipPopup$3(this));
      }
    }

}
