// Decompiled from classes.dex (SourceFile: SimpleGraphObjectCursor.java) via IDA Pro 9.5 Dalvik Decompiler
package com.facebook.widget;

class SimpleGraphObjectCursor<T> implements com.facebook.widget.GraphObjectCursor<T> {
    // Fields
    private boolean closed;
    private boolean fromCache;
    private java.util.ArrayList graphObjects;
    private boolean moreObjectsAvailable;
    private int pos;

    // Methods
    SimpleGraphObjectCursor()
    {
      super();
      this.pos = -1;
      this.closed = false;
      this.graphObjects = new java.util.ArrayList();
      this.moreObjectsAvailable = false;
      this.fromCache = false;
    }

    SimpleGraphObjectCursor(com.facebook.widget.SimpleGraphObjectCursor<T> p0)
    {
      super();
      this.pos = -1;
      this.closed = false;
      this.graphObjects = new java.util.ArrayList();
      this.moreObjectsAvailable = false;
      this.fromCache = false;
      this.pos = p0.pos;
      this.closed = p0.closed;
      this.graphObjects = new java.util.ArrayList();
      this.graphObjects.addAll(p0.graphObjects);
      this.fromCache = p0.fromCache;
    }

    public void addGraphObjects(java.util.Collection<T> p0, boolean p1)
    {
      this.graphObjects.addAll(p0);
      this.fromCache = this.fromCache || p1;
    }

    public boolean areMoreObjectsAvailable()
    {
      return this.moreObjectsAvailable;
    }

    public void close()
    {
      this.closed = true;
    }

    public int getCount()
    {
      return this.graphObjects.size();
    }

    public com.facebook.model.GraphObject getGraphObject()
    {
      if ( this.pos < 0 )
        throw new android.database.CursorIndexOutOfBoundsException("Before first object.");
      if ( this.pos >= this.graphObjects.size() )
        throw new android.database.CursorIndexOutOfBoundsException("After last object.");
      return (com.facebook.model.GraphObject)this.graphObjects.get(this.pos);
    }

    public int getPosition()
    {
      return this.pos;
    }

    public boolean isAfterLast()
    {
      int Count; // RETVAL
    
      Count = this.getCount();
      return Count == 0 || this.pos == Count;
    }

    public boolean isBeforeFirst()
    {
      return this.getCount() == 0 || this.pos == -1;
    }

    public boolean isClosed()
    {
      return this.closed;
    }

    public boolean isFirst()
    {
      return this.pos == 0 && this.getCount() != 0;
    }

    public boolean isFromCache()
    {
      return this.fromCache;
    }

    public boolean isLast()
    {
      int Count; // RETVAL
    
      Count = this.getCount();
      return this.pos == Count - 1 && Count != 0;
    }

    public boolean move(int p0)
    {
      return this.moveToPosition(this.pos + p0);
    }

    public boolean moveToFirst()
    {
      return this.moveToPosition(0);
    }

    public boolean moveToLast()
    {
      return this.moveToPosition(this.getCount() - 1);
    }

    public boolean moveToNext()
    {
      return this.moveToPosition(this.pos + 1);
    }

    public boolean moveToPosition(int p0)
    {
      boolean v2;
      int Count; // RETVAL
    
      v2 = false;
      Count = this.getCount();
      if ( p0 < Count )
      {
        if ( p0 >= 0 )
        {
          this.pos = p0;
          return true;
        }
        else
        {
          this.pos = -1;
        }
      }
      else
      {
        this.pos = Count;
      }
      return v2;
    }

    public boolean moveToPrevious()
    {
      return this.moveToPosition(this.pos - 1);
    }

    public void setFromCache(boolean p0)
    {
      this.fromCache = p0;
    }

    public void setMoreObjectsAvailable(boolean p0)
    {
      this.moreObjectsAvailable = p0;
    }

}
