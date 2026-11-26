// Decompiled from classes.dex (SourceFile: ExploreByTouchHelper.java) via IDA Pro 9.5 Dalvik Decompiler
package android.support.v4.widget;

import android.support.v4.view.ViewCompat;
import android.support.v4.view.ViewParentCompat;
import android.support.v4.view.accessibility.AccessibilityEventCompat;
import android.support.v4.view.accessibility.AccessibilityManagerCompat;
import android.support.v4.view.accessibility.AccessibilityNodeInfoCompat;
import android.view.View;
import android.view.accessibility.AccessibilityEvent;
public abstract class ExploreByTouchHelper extends android.support.v4.view.AccessibilityDelegateCompat {
    // Fields
    private static final java.lang.String DEFAULT_CLASS_NAME;
    public static int INVALID_ID;
    private int mFocusedVirtualViewId;
    private int mHoveredVirtualViewId;
    private final android.view.accessibility.AccessibilityManager mManager;
    private android.support.v4.widget.ExploreByTouchHelper$ExploreByTouchNodeProvider mNodeProvider;
    private final int[] mTempGlobalRect;
    private final android.graphics.Rect mTempParentRect;
    private final android.graphics.Rect mTempScreenRect;
    private final android.graphics.Rect mTempVisibleRect;
    private final android.view.View mView;

    // Methods
    static
    {
      DEFAULT_CLASS_NAME = android.view.View.class.getName();
    }

    public ExploreByTouchHelper(android.view.View p0)
    {
      super();
      this.mTempScreenRect = new android.graphics.Rect();
      this.mTempParentRect = new android.graphics.Rect();
      this.mTempVisibleRect = new android.graphics.Rect();
      this.mTempGlobalRect = new int[2];
      this.mFocusedVirtualViewId = 0x80000000;
      this.mHoveredVirtualViewId = 0x80000000;
      if ( p0 == null )
        throw new IllegalArgumentException("View may not be null");
      this.mView = p0;
      this.mManager = (android.view.accessibility.AccessibilityManager)p0.getContext().getSystemService("accessibility");
    }

    /* synthetic */ static android.support.v4.view.accessibility.AccessibilityNodeInfoCompat access$100(
            android.support.v4.widget.ExploreByTouchHelper p0,
            int p1)
    {
      return p0.createNode(p1);
    }

    /* synthetic */ static boolean access$200(
            android.support.v4.widget.ExploreByTouchHelper p0,
            int p1,
            int p2,
            android.os.Bundle p3)
    {
      return p0.performAction(p1, p2, p3);
    }

    private boolean clearAccessibilityFocus(int p0)
    {
      if ( !this.isAccessibilityFocused(p0) )
        return false;
      this.mFocusedVirtualViewId = 0x80000000;
      this.mView.invalidate();
      this.sendEventForVirtualView(p0, 0x10000);
      return true;
    }

    private android.view.accessibility.AccessibilityEvent createEvent(int p0, int p1)
    {
      if ( p0 == -1 )
        return this.createEventForHost(p1);
      else
        return this.createEventForChild(p0, p1);
    }

    private android.view.accessibility.AccessibilityEvent createEventForChild(int p0, int p1)
    {
      android.view.accessibility.AccessibilityEvent v3;
      v3 = AccessibilityEvent.obtain(p1);
      v3.setEnabled(true);
      v3.setClassName(DEFAULT_CLASS_NAME);
      this.onPopulateEventForVirtualView(p0, v3);
      if ( v3.getText().isEmpty() && v3.getContentDescription() == null )
        throw new RuntimeException("Callbacks must add text or a content description in populateEventForVirtualViewId()");
      v3.setPackageName(this.mView.getContext().getPackageName());
      AccessibilityEventCompat.asRecord(v3).setSource(this.mView, p0);
      return v3;
    }

    private android.view.accessibility.AccessibilityEvent createEventForHost(int p0)
    {
      android.view.accessibility.AccessibilityEvent result; // RETVAL
    
      result = AccessibilityEvent.obtain(p0);
      ViewCompat.onInitializeAccessibilityEvent(this.mView, result);
      return result;
    }

    private android.support.v4.view.accessibility.AccessibilityNodeInfoCompat createNode(int p0)
    {
      if ( p0 == -1 )
        return this.createNodeForHost();
      else
        return this.createNodeForChild(p0);
    }

    private android.support.v4.view.accessibility.AccessibilityNodeInfoCompat createNodeForChild(
            int p0)
    {
      android.support.v4.view.accessibility.AccessibilityNodeInfoCompat v2;
      int Actions; // RETVAL
    
      v2 = AccessibilityNodeInfoCompat.obtain();
      v2.setEnabled(true);
      v2.setClassName(DEFAULT_CLASS_NAME);
      this.onPopulateNodeForVirtualView(p0, v2);
      if ( v2.getText() == null && v2.getContentDescription() == null )
        throw new RuntimeException("Callbacks must add text or a content description in populateNodeForVirtualViewId()");
      v2.getBoundsInParent(this.mTempParentRect);
      if ( this.mTempParentRect.isEmpty() )
        throw new RuntimeException("Callbacks must set parent bounds in populateNodeForVirtualViewId()");
      Actions = v2.getActions();
      if ( (Actions & 0x40) != 0 )
        throw new RuntimeException("Callbacks must not add ACTION_ACCESSIBILITY_FOCUS in populateNodeForVirtualViewId()");
      if ( (Actions & 0x80) != 0 )
        throw new RuntimeException("Callbacks must not add ACTION_CLEAR_ACCESSIBILITY_FOCUS in populateNodeForVirtualViewId()");
      v2.setPackageName(this.mView.getContext().getPackageName());
      v2.setSource(this.mView, p0);
      v2.setParent(this.mView);
      if ( this.mFocusedVirtualViewId == p0 )
      {
        v2.setAccessibilityFocused(true);
        v2.addAction(128);
      }
      else
      {
        v2.setAccessibilityFocused(false);
        v2.addAction(64);
      }
      if ( this.intersectVisibleToUser(this.mTempParentRect) )
      {
        v2.setVisibleToUser(true);
        v2.setBoundsInParent(this.mTempParentRect);
      }
      this.mView.getLocationOnScreen(this.mTempGlobalRect);
      this.mTempScreenRect.set(this.mTempParentRect);
      this.mTempScreenRect.offset(this.mTempGlobalRect[0], this.mTempGlobalRect[1]);
      v2.setBoundsInScreen(this.mTempScreenRect);
      return v2;
    }

    private android.support.v4.view.accessibility.AccessibilityNodeInfoCompat createNodeForHost()
    {
      android.support.v4.view.accessibility.AccessibilityNodeInfoCompat v1;
      java.util.LinkedList v2;
      java.util.Iterator i;
      v1 = AccessibilityNodeInfoCompat.obtain(this.mView);
      ViewCompat.onInitializeAccessibilityNodeInfo(this.mView, v1);
      v2 = new java.util.LinkedList();
      this.getVisibleVirtualViews(v2);
      for ( i = v2.iterator(); i.hasNext(); v1.addChild(this.mView, ((Integer)i.next()).intValue()) )
        ;
      return v1;
    }

    private boolean intersectVisibleToUser(android.graphics.Rect p0)
    {
      android.view.ViewParent i;
      android.view.View v5;
      if ( p0 == null || p0.isEmpty() )
        return false;
      if ( this.mView.getWindowVisibility() != 0 )
        return false;
      for ( i = this.mView.getParent(); i instanceof android.view.View; i = v5.getParent() )
      {
        v5 = (android.view.View)i;
        if ( ViewCompat.getAlpha(v5) <= 0.0f || v5.getVisibility() != 0 )
          return false;
      }
      return i != null && this.mView.getLocalVisibleRect(this.mTempVisibleRect) && p0.intersect(this.mTempVisibleRect);
    }

    private boolean isAccessibilityFocused(int p0)
    {
      return this.mFocusedVirtualViewId == p0;
    }

    private boolean manageFocusForChild(int p0, int p1, android.os.Bundle p2)
    {
      boolean v4;
      switch ( p1 )
      {
        case 64:
          v4 = this.requestAccessibilityFocus(p0);
          break;
        case 128:
          v4 = this.clearAccessibilityFocus(p0);
          break;
        default:
          v4 = false;
          break;
      }
      return v4;
    }

    private boolean performAction(int p0, int p1, android.os.Bundle p2)
    {
      if ( p0 == -1 )
        return this.performActionForHost(p1, p2);
      else
        return this.performActionForChild(p0, p1, p2);
    }

    private boolean performActionForChild(int p0, int p1, android.os.Bundle p2)
    {
      boolean v4;
      switch ( p1 )
      {
        case 64:
        case 128:
          v4 = this.manageFocusForChild(p0, p1, p2);
          break;
        default:
          v4 = this.onPerformActionForVirtualView(p0, p1, p2);
          break;
      }
      return v4;
    }

    private boolean performActionForHost(int p0, android.os.Bundle p1)
    {
      return ViewCompat.performAccessibilityAction(this.mView, p0, p1);
    }

    private boolean requestAccessibilityFocus(int p0)
    {
      boolean v2;
      v2 = false;
      if ( this.mManager.isEnabled()
        && AccessibilityManagerCompat.isTouchExplorationEnabled(this.mManager)
        && !this.isAccessibilityFocused(p0) )
      {
        this.mFocusedVirtualViewId = p0;
        this.mView.invalidate();
        this.sendEventForVirtualView(p0, 0x8000);
        return true;
      }
      return v2;
    }

    private void updateHoveredVirtualView(int p0)
    {
      if ( this.mHoveredVirtualViewId != p0 )
      {
        this.mHoveredVirtualViewId = p0;
        this.sendEventForVirtualView(p0, 128);
        this.sendEventForVirtualView(this.mHoveredVirtualViewId, 256);
      }
    }

    public boolean dispatchHoverEvent(android.view.MotionEvent p0)
    {
      boolean v2;
      int VirtualViewAt; // RETVAL
    
      v2 = true;
      if ( !this.mManager.isEnabled() || !AccessibilityManagerCompat.isTouchExplorationEnabled(this.mManager) )
        return false;
      switch ( p0.getAction() )
      {
        case 7:
        case 9:
          VirtualViewAt = this.getVirtualViewAt(p0.getX(), p0.getY());
          this.updateHoveredVirtualView(VirtualViewAt);
          v2 = VirtualViewAt != 0x80000000;
          break;
        case 10:
          if ( this.mFocusedVirtualViewId == 0x80000000 )
            v2 = false;
          else
            this.updateHoveredVirtualView(0x80000000);
          break;
        default:
          v2 = false;
          break;
      }
      return v2;
    }

    public android.support.v4.view.accessibility.AccessibilityNodeProviderCompat getAccessibilityNodeProvider(
            android.view.View p0)
    {
      if ( this.mNodeProvider == null )
        this.mNodeProvider = new android.support.v4.widget.ExploreByTouchHelper$ExploreByTouchNodeProvider(this, null);
      return this.mNodeProvider;
    }

    public int getFocusedVirtualView()
    {
      return this.mFocusedVirtualViewId;
    }

    protected abstract int getVirtualViewAt(float p0, float p1);

    protected abstract void getVisibleVirtualViews(java.util.List p0);

    public void invalidateRoot()
    {
      this.invalidateVirtualView(-1);
    }

    public void invalidateVirtualView(int p0)
    {
      this.sendEventForVirtualView(p0, 2048);
    }

    protected abstract boolean onPerformActionForVirtualView(int p0, int p1, android.os.Bundle p2);

    protected abstract void onPopulateEventForVirtualView(int p0, android.view.accessibility.AccessibilityEvent p1);

    protected abstract void onPopulateNodeForVirtualView(int p0, android.support.v4.view.accessibility.AccessibilityNodeInfoCompat p1);

    public boolean sendEventForVirtualView(int p0, int p1)
    {
      boolean v3;
      android.view.ViewParent Parent;
      v3 = false;
      if ( p0 != 0x80000000 && this.mManager.isEnabled() )
      {
        Parent = this.mView.getParent();
        if ( Parent != null )
          return ViewParentCompat.requestSendAccessibilityEvent(Parent, this.mView, this.createEvent(p0, p1));
      }
      return v3;
    }

}
