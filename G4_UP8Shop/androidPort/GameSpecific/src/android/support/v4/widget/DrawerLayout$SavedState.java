// Decompiled from classes.dex (SourceFile: DrawerLayout$SavedState.java) via IDA Pro 9.5 Dalvik Decompiler
package android.support.v4.widget;

public class DrawerLayout$SavedState extends android.view.View.BaseSavedState {
    // Fields
    public static final android.os.Parcelable.Creator CREATOR;
    int lockModeLeft;
    int lockModeRight;
    int openDrawerGravity;

    // Methods
    static
    {
      CREATOR = (android.os.Parcelable.Creator)new android.support.v4.widget.DrawerLayout$SavedState$1();
    }

    public DrawerLayout$SavedState(android.os.Parcel p0)
    {
      super(p0);
      this.openDrawerGravity = 0;
      this.lockModeLeft = 0;
      this.lockModeRight = 0;
      this.openDrawerGravity = p0.readInt();
    }

    public DrawerLayout$SavedState(android.os.Parcelable p0)
    {
      super(p0);
      this.openDrawerGravity = 0;
      this.lockModeLeft = 0;
      this.lockModeRight = 0;
    }

    public void writeToParcel(android.os.Parcel p0, int p1)
    {
      super.writeToParcel(p0, p1);
      p0.writeInt(this.openDrawerGravity);
    }

}
