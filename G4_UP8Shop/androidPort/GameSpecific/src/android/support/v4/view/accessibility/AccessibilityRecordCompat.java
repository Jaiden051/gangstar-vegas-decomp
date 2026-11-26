// Decompiled from classes.dex (SourceFile: AccessibilityRecordCompat.java) via IDA Pro 9.5 Dalvik Decompiler
package android.support.v4.view.accessibility;

import android.os.Build;
public class AccessibilityRecordCompat {
    // Fields
    private static final android.support.v4.view.accessibility.AccessibilityRecordCompat$AccessibilityRecordImpl IMPL;
    private final java.lang.Object mRecord;

    // Methods
    static
    {
      if ( Build.VERSION.SDK_INT < 16 )
      {
        if ( Build.VERSION.SDK_INT < 15 )
        {
          if ( Build.VERSION.SDK_INT < 14 )
            IMPL = (android.support.v4.view.accessibility.AccessibilityRecordCompat$AccessibilityRecordImpl)new android.support.v4.view.accessibility.AccessibilityRecordCompat$AccessibilityRecordStubImpl();
          else
            IMPL = (android.support.v4.view.accessibility.AccessibilityRecordCompat$AccessibilityRecordImpl)new android.support.v4.view.accessibility.AccessibilityRecordCompat$AccessibilityRecordIcsImpl();
        }
        else
        {
          IMPL = (android.support.v4.view.accessibility.AccessibilityRecordCompat$AccessibilityRecordImpl)new android.support.v4.view.accessibility.AccessibilityRecordCompat$AccessibilityRecordIcsMr1Impl();
        }
      }
      else
      {
        IMPL = (android.support.v4.view.accessibility.AccessibilityRecordCompat$AccessibilityRecordImpl)new android.support.v4.view.accessibility.AccessibilityRecordCompat$AccessibilityRecordJellyBeanImpl();
      }
    }

    public AccessibilityRecordCompat(Object p0)
    {
      super();
      this.mRecord = p0;
    }

    public static android.support.v4.view.accessibility.AccessibilityRecordCompat obtain()
    {
      return new android.support.v4.view.accessibility.AccessibilityRecordCompat(IMPL.obtain());
    }

    public static android.support.v4.view.accessibility.AccessibilityRecordCompat obtain(
            android.support.v4.view.accessibility.AccessibilityRecordCompat p0)
    {
      return new android.support.v4.view.accessibility.AccessibilityRecordCompat(IMPL.obtain(p0.mRecord));
    }

    public boolean equals(Object p0)
    {
      boolean v2;
      android.support.v4.view.accessibility.AccessibilityRecordCompat v4;
      v2 = true;
      if ( this != p0 )
      {
        if ( p0 != null )
        {
          if ( this.getClass() == p0.getClass() )
          {
            v4 = (android.support.v4.view.accessibility.AccessibilityRecordCompat)p0;
            if ( this.mRecord != null )
              return this.mRecord.equals(v4.mRecord);
            else
              return v4.mRecord == null;
          }
          else
          {
            return false;
          }
        }
        else
        {
          return false;
        }
      }
      return v2;
    }

    public int getAddedCount()
    {
      return IMPL.getAddedCount(this.mRecord);
    }

    public CharSequence getBeforeText()
    {
      return IMPL.getBeforeText(this.mRecord);
    }

    public CharSequence getClassName()
    {
      return IMPL.getClassName(this.mRecord);
    }

    public CharSequence getContentDescription()
    {
      return IMPL.getContentDescription(this.mRecord);
    }

    public int getCurrentItemIndex()
    {
      return IMPL.getCurrentItemIndex(this.mRecord);
    }

    public int getFromIndex()
    {
      return IMPL.getFromIndex(this.mRecord);
    }

    public Object getImpl()
    {
      return this.mRecord;
    }

    public int getItemCount()
    {
      return IMPL.getItemCount(this.mRecord);
    }

    public int getMaxScrollX()
    {
      return IMPL.getMaxScrollX(this.mRecord);
    }

    public int getMaxScrollY()
    {
      return IMPL.getMaxScrollY(this.mRecord);
    }

    public android.os.Parcelable getParcelableData()
    {
      return IMPL.getParcelableData(this.mRecord);
    }

    public int getRemovedCount()
    {
      return IMPL.getRemovedCount(this.mRecord);
    }

    public int getScrollX()
    {
      return IMPL.getScrollX(this.mRecord);
    }

    public int getScrollY()
    {
      return IMPL.getScrollY(this.mRecord);
    }

    public android.support.v4.view.accessibility.AccessibilityNodeInfoCompat getSource()
    {
      return IMPL.getSource(this.mRecord);
    }

    public java.util.List<CharSequence> getText()
    {
      return IMPL.getText(this.mRecord);
    }

    public int getToIndex()
    {
      return IMPL.getToIndex(this.mRecord);
    }

    public int getWindowId()
    {
      return IMPL.getWindowId(this.mRecord);
    }

    public int hashCode()
    {
      if ( this.mRecord != null )
        return this.mRecord.hashCode();
      else
        return 0;
    }

    public boolean isChecked()
    {
      return IMPL.isChecked(this.mRecord);
    }

    public boolean isEnabled()
    {
      return IMPL.isEnabled(this.mRecord);
    }

    public boolean isFullScreen()
    {
      return IMPL.isFullScreen(this.mRecord);
    }

    public boolean isPassword()
    {
      return IMPL.isPassword(this.mRecord);
    }

    public boolean isScrollable()
    {
      return IMPL.isScrollable(this.mRecord);
    }

    public void recycle()
    {
      IMPL.recycle(this.mRecord);
    }

    public void setAddedCount(int p0)
    {
      IMPL.setAddedCount(this.mRecord, p0);
    }

    public void setBeforeText(CharSequence p0)
    {
      IMPL.setBeforeText(this.mRecord, p0);
    }

    public void setChecked(boolean p0)
    {
      IMPL.setChecked(this.mRecord, p0);
    }

    public void setClassName(CharSequence p0)
    {
      IMPL.setClassName(this.mRecord, p0);
    }

    public void setContentDescription(CharSequence p0)
    {
      IMPL.setContentDescription(this.mRecord, p0);
    }

    public void setCurrentItemIndex(int p0)
    {
      IMPL.setCurrentItemIndex(this.mRecord, p0);
    }

    public void setEnabled(boolean p0)
    {
      IMPL.setEnabled(this.mRecord, p0);
    }

    public void setFromIndex(int p0)
    {
      IMPL.setFromIndex(this.mRecord, p0);
    }

    public void setFullScreen(boolean p0)
    {
      IMPL.setFullScreen(this.mRecord, p0);
    }

    public void setItemCount(int p0)
    {
      IMPL.setItemCount(this.mRecord, p0);
    }

    public void setMaxScrollX(int p0)
    {
      IMPL.setMaxScrollX(this.mRecord, p0);
    }

    public void setMaxScrollY(int p0)
    {
      IMPL.setMaxScrollY(this.mRecord, p0);
    }

    public void setParcelableData(android.os.Parcelable p0)
    {
      IMPL.setParcelableData(this.mRecord, p0);
    }

    public void setPassword(boolean p0)
    {
      IMPL.setPassword(this.mRecord, p0);
    }

    public void setRemovedCount(int p0)
    {
      IMPL.setRemovedCount(this.mRecord, p0);
    }

    public void setScrollX(int p0)
    {
      IMPL.setScrollX(this.mRecord, p0);
    }

    public void setScrollY(int p0)
    {
      IMPL.setScrollY(this.mRecord, p0);
    }

    public void setScrollable(boolean p0)
    {
      IMPL.setScrollable(this.mRecord, p0);
    }

    public void setSource(android.view.View p0)
    {
      IMPL.setSource(this.mRecord, p0);
    }

    public void setSource(android.view.View p0, int p1)
    {
      IMPL.setSource(this.mRecord, p0, p1);
    }

    public void setToIndex(int p0)
    {
      IMPL.setToIndex(this.mRecord, p0);
    }

}
