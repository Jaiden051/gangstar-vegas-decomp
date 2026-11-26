// Decompiled from classes.dex (SourceFile: ViewPager$SavedState.java) via IDA Pro 9.5 Dalvik Decompiler
package android.support.v4.view;

import android.support.v4.os.ParcelableCompat;
public class ViewPager$SavedState extends android.view.View.BaseSavedState {
    // Fields
    public static final android.os.Parcelable.Creator CREATOR;
    android.os.Parcelable adapterState;
    java.lang.ClassLoader loader;
    int position;

    // Methods
    static
    {
      CREATOR = ParcelableCompat.newCreator((android.support.v4.os.ParcelableCompatCreatorCallbacks)new android.support.v4.view.ViewPager$SavedState$1());
    }

    ViewPager$SavedState(android.os.Parcel p0, ClassLoader p1)
    {
      super(p0);
      if ( p1 == null )
        p1 = this.getClass().getClassLoader();
      this.position = p0.readInt();
      this.adapterState = p0.readParcelable(p1);
      this.loader = p1;
    }

    public ViewPager$SavedState(android.os.Parcelable p0)
    {
      super(p0);
    }

    public String toString()
    {
      return "FragmentPager.SavedState{"
           + Integer.toHexString(System.identityHashCode(this))
           + " position="
           + this.position
           + "}";
    }

    public void writeToParcel(android.os.Parcel p0, int p1)
    {
      super.writeToParcel(p0, p1);
      p0.writeInt(this.position);
      p0.writeParcelable(this.adapterState, p1);
    }

}
