// Decompiled from classes.dex (SourceFile: ActionProvider.java) via IDA Pro 9.5 Dalvik Decompiler
package android.support.v4.view;

import android.util.Log;
public abstract class ActionProvider {
    // Fields
    private static java.lang.String TAG;
    private final android.content.Context mContext;
    private android.support.v4.view.ActionProvider$SubUiVisibilityListener mSubUiVisibilityListener;
    private android.support.v4.view.ActionProvider$VisibilityListener mVisibilityListener;

    // Methods
    public ActionProvider(android.content.Context p0)
    {
      super();
      this.mContext = p0;
    }

    public android.content.Context getContext()
    {
      return this.mContext;
    }

    public boolean hasSubMenu()
    {
      return false;
    }

    public boolean isVisible()
    {
      return true;
    }

    public abstract android.view.View onCreateActionView();

    public android.view.View onCreateActionView(android.view.MenuItem p0)
    {
      return this.onCreateActionView();
    }

    public boolean onPerformDefaultAction()
    {
      return false;
    }

    public void onPrepareSubMenu(android.view.SubMenu p0)
    {
      ;
    }

    public boolean overridesItemVisibility()
    {
      return false;
    }

    public void refreshVisibility()
    {
      if ( this.mVisibilityListener != null && this.overridesItemVisibility() )
        this.mVisibilityListener.onActionProviderVisibilityChanged(this.isVisible());
    }

    public void setSubUiVisibilityListener(
            android.support.v4.view.ActionProvider$SubUiVisibilityListener p0)
    {
      this.mSubUiVisibilityListener = p0;
    }

    public void setVisibilityListener(android.support.v4.view.ActionProvider$VisibilityListener p0)
    {
      if ( this.mVisibilityListener != null && p0 != null )
        Log.w(
          "ActionProvider(support)",
          "setVisibilityListener: Setting a new ActionProvider$VisibilityListener when one is already set. Are you reusing this "
        + this.getClass().getSimpleName()
        + " instance while it is still in use somewhere else?");
      this.mVisibilityListener = p0;
    }

    public void subUiVisibilityChanged(boolean p0)
    {
      if ( this.mSubUiVisibilityListener != null )
        this.mSubUiVisibilityListener.onSubUiVisibilityChanged(p0);
    }

}
