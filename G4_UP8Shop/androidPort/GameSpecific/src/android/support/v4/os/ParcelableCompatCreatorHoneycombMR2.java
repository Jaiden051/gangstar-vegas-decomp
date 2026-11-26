// Decompiled from classes.dex (SourceFile: ParcelableCompatCreatorHoneycombMR2.java) via IDA Pro 9.5 Dalvik Decompiler
package android.support.v4.os;

class ParcelableCompatCreatorHoneycombMR2<T> implements android.os.Parcelable.ClassLoaderCreator<T> {
    // Fields
    private final android.support.v4.os.ParcelableCompatCreatorCallbacks mCallbacks;

    // Methods
    public ParcelableCompatCreatorHoneycombMR2(android.support.v4.os.ParcelableCompatCreatorCallbacks<T> p0)
    {
      super();
      this.mCallbacks = p0;
    }

    public T createFromParcel(android.os.Parcel p0)
    {
      return (T)this.mCallbacks.createFromParcel(p0, null);
    }

    public T createFromParcel(android.os.Parcel p0, ClassLoader p1)
    {
      return (T)this.mCallbacks.createFromParcel(p0, p1);
    }

    public T[] newArray(int p0)
    {
      return (T[])this.mCallbacks.newArray(p0);
    }

}
