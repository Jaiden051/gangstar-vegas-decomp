// Decompiled from classes.dex (SourceFile: SlidingPaneLayout$SavedState.java) via IDA Pro 9.5 Dalvik Decompiler
package android.support.v4.widget;

class SlidingPaneLayout$SavedState extends android.view.View.BaseSavedState {
    // Fields
    public static final android.os.Parcelable.Creator CREATOR;
    boolean isOpen;

    // Methods
    static
    {
      CREATOR = (android.os.Parcelable.Creator)new android.support.v4.widget.SlidingPaneLayout$SavedState$1();
    }

    private SlidingPaneLayout$SavedState(android.os.Parcel p0)
    {
      super(p0);
      this.isOpen = p0.readInt() != 0;
    }

    /* synthetic */ SlidingPaneLayout$SavedState(android.os.Parcel p0, android.support.v4.widget.SlidingPaneLayout$1 p1)
    {
      this(p0);
    }

    SlidingPaneLayout$SavedState(android.os.Parcelable p0)
    {
      super(p0);
    }

    public void writeToParcel(android.os.Parcel p0, int p1)
    {
      super.writeToParcel(p0, p1);
      p0.writeInt(com.gameloft.android.DecompRT.b2i(this.isOpen));
    }

}
