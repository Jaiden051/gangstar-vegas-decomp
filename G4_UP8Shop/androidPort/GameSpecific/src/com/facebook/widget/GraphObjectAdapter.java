// Decompiled from classes.dex (SourceFile: GraphObjectAdapter.java) via IDA Pro 9.5 Dalvik Decompiler
package com.facebook.widget;

import com.facebook.model.GraphObject$Factory;
import android.graphics.Bitmap;
import android.view.LayoutInflater;
import android.widget.TextView;
import com.facebook.internal.ImageDownloader;
import com.facebook.model.GraphObject;
import java.text.Collator;
import java.util.Collections;
import java.util.Locale;
class GraphObjectAdapter<T extends com.facebook.model.GraphObject> extends android.widget.BaseAdapter implements android.widget.SectionIndexer {
    // Fields
    static final boolean $assertionsDisabled;
    private static int ACTIVITY_CIRCLE_VIEW_TYPE;
    private static int DISPLAY_SECTIONS_THRESHOLD;
    private static int GRAPH_OBJECT_VIEW_TYPE;
    private static int HEADER_VIEW_TYPE;
    private static java.lang.String ID;
    private static int MAX_PREFETCHED_PICTURES;
    private static java.lang.String NAME;
    private static java.lang.String PICTURE;
    private android.content.Context context;
    private com.facebook.widget.GraphObjectCursor cursor;
    private com.facebook.widget.GraphObjectAdapter$DataNeededListener dataNeededListener;
    private boolean displaySections;
    private com.facebook.widget.GraphObjectAdapter$Filter filter;
    private java.util.Map graphObjectsById;
    private java.util.Map graphObjectsBySection;
    private java.lang.String groupByField;
    private final android.view.LayoutInflater inflater;
    private com.facebook.widget.GraphObjectAdapter$OnErrorListener onErrorListener;
    private final java.util.Map pendingRequests;
    private java.util.Map prefetchedPictureCache;
    private java.util.ArrayList prefetchedProfilePictureIds;
    private java.util.List sectionKeys;
    private boolean showCheckbox;
    private boolean showPicture;
    private java.util.List sortFields;

    // Methods
    static
    {
      $assertionsDisabled = !com.facebook.widget.GraphObjectAdapter.class.desiredAssertionStatus();
    }

    public GraphObjectAdapter(android.content.Context p0)
    {
      super();
      this.pendingRequests = new java.util.HashMap();
      this.sectionKeys = new java.util.ArrayList();
      this.graphObjectsBySection = new java.util.HashMap();
      this.graphObjectsById = new java.util.HashMap();
      this.prefetchedPictureCache = new java.util.HashMap();
      this.prefetchedProfilePictureIds = new java.util.ArrayList();
      this.context = p0;
      this.inflater = LayoutInflater.from(p0);
    }

    /* synthetic */ static java.util.List access$000(com.facebook.widget.GraphObjectAdapter p0)
    {
      return p0.sortFields;
    }

    /* synthetic */ static int access$100(
            com.facebook.model.GraphObject p0,
            com.facebook.model.GraphObject p1,
            java.util.Collection p2,
            java.text.Collator p3)
    {
      return compareGraphObjects(p0, p1, p2, p3);
    }

    /* synthetic */ static void access$200(
            com.facebook.widget.GraphObjectAdapter p0,
            com.facebook.internal.ImageResponse p1,
            String p2,
            android.widget.ImageView p3)
    {
      p0.processImageResponse(p1, p2, p3);
    }

    private void callOnErrorListener(Exception p0)
    {
      Exception v2;
      if ( this.onErrorListener != null )
      {
        if ( p0 instanceof com.facebook.FacebookException )
          v2 = p0;
        else
          v2 = new com.facebook.FacebookException(p0);
        this.onErrorListener.onError(this, (com.facebook.FacebookException)v2);
      }
    }

    private static int compareGraphObjects(
            com.facebook.model.GraphObject p0,
            com.facebook.model.GraphObject p1,
            java.util.Collection<String> p2,
            java.text.Collator p3)
    {
      java.util.Iterator v4;
      String v5;
      String v6;
      String v7;
      int v8;
      v4 = p2.iterator();
      do
      {
        while ( true )
        {
          if ( !v4.hasNext() )
            return 0;
          v5 = (String)v4.next();
          v6 = (String)((com.facebook.model.GraphObject)p0).getProperty(v5);
          v7 = (String)p1.getProperty(v5);
          if ( v6 == null || v7 == null )
            break;
          v8 = p3.compare(v6, v7);
          if ( v8 != 0 )
            return v8;
        }
      }
      while ( v6 == null && v7 == null );
      if ( v6 != null )
        return 1;
      else
        return -1;
    }

    private void downloadProfilePicture(String p0, java.net.URI p1, android.widget.ImageView p2)
    {
      com.facebook.internal.ImageRequest v4;
      if ( p1 != null && (p2 == null || !p1.equals(p2.getTag())) )
      {
        if ( p2 != null )
        {
          p2.setTag(p0);
          p2.setImageResource(this.getDefaultPicture());
        }
        v4 = new com.facebook.internal.ImageRequest$Builder(this.context.getApplicationContext(), p1).setCallerTag(this).setCallback((com.facebook.internal.ImageRequest$Callback)new com.facebook.widget.GraphObjectAdapter$2(this, p0, p2)).build();
        this.pendingRequests.put(p0, v4);
        ImageDownloader.downloadAsync(v4);
      }
    }

    private android.view.View getActivityCircleView(android.view.View p0, android.view.ViewGroup p1)
    {
      if ( p0 == null )
        p0 = this.inflater.inflate(3, null);
      ((android.widget.ProgressBar)p0.findViewById(2131427368)).setVisibility(0);
      return p0;
    }

    private void processImageResponse(
            com.facebook.internal.ImageResponse p0,
            String p1,
            android.widget.ImageView p2)
    {
      Exception Error;
      android.graphics.Bitmap Bitmap; // RETVAL
    
      this.pendingRequests.remove(p1);
      if ( p0.getError() != null )
        this.callOnErrorListener(p0.getError());
      if ( p2 != null )
      {
        if ( p1.equals(p2.getTag()) )
        {
          Error = p0.getError();
          Bitmap = p0.getBitmap();
          if ( Error == null && Bitmap != null )
          {
            p2.setImageBitmap(Bitmap);
            p2.setTag(p0.getRequest().getImageUri());
          }
        }
      }
      else if ( p0.getBitmap() != null )
      {
        if ( this.prefetchedPictureCache.size() >= 20 )
          this.prefetchedPictureCache.remove((String)this.prefetchedProfilePictureIds.remove(0));
        this.prefetchedPictureCache.put(p1, p0);
      }
    }

    private void rebuildSections()
    {
      boolean v1;
      int i;
      T GraphObject;
      int v4;
      String SectionKeyOfGraphObject;
      java.text.Collator Instance;
      java.util.Iterator j;
      v1 = false;
      this.sectionKeys = new java.util.ArrayList();
      this.graphObjectsBySection = new java.util.HashMap();
      this.graphObjectsById = new java.util.HashMap();
      this.displaySections = false;
      if ( this.cursor != null && this.cursor.getCount() != 0 )
      {
        this.cursor.moveToFirst();
        for ( i = 0; ; i = v4 )
        {
          GraphObject = (T)this.cursor.getGraphObject();
          if ( this.filterIncludesItem(GraphObject) )
          {
            v4 = i + 1;
            SectionKeyOfGraphObject = this.getSectionKeyOfGraphObject(GraphObject);
            if ( !this.graphObjectsBySection.containsKey(SectionKeyOfGraphObject) )
            {
              this.sectionKeys.add(SectionKeyOfGraphObject);
              this.graphObjectsBySection.put(SectionKeyOfGraphObject, new java.util.ArrayList());
            }
            ((java.util.List)this.graphObjectsBySection.get(SectionKeyOfGraphObject)).add(GraphObject);
            this.graphObjectsById.put(this.getIdOfGraphObject(GraphObject), GraphObject);
          }
          else
          {
            v4 = i;
          }
          if ( !this.cursor.moveToNext() )
            break;
        }
        if ( this.sortFields != null )
        {
          Instance = Collator.getInstance();
          for ( j = this.graphObjectsBySection.values().iterator();
                j.hasNext();
                Collections.sort(
                  (java.util.List)j.next(),
                  (java.util.Comparator)new com.facebook.widget.GraphObjectAdapter$1(this, Instance)) )
          {
            ;
          }
        }
        Collections.sort(this.sectionKeys, Collator.getInstance());
        if ( this.sectionKeys.size() > 1 && v4 > 1 )
          v1 = true;
        this.displaySections = v1;
      }
    }

    private boolean shouldShowActivityCircleCell()
    {
      return this.cursor != null
          && this.cursor.areMoreObjectsAvailable()
          && this.dataNeededListener != null
          && !this.isEmpty();
    }

    public boolean areAllItemsEnabled()
    {
      return this.displaySections;
    }

    public boolean changeCursor(com.facebook.widget.GraphObjectCursor<T> p0)
    {
      if ( this.cursor == p0 )
        return false;
      if ( this.cursor != null )
        this.cursor.close();
      this.cursor = p0;
      this.rebuildAndNotify();
      return true;
    }

    protected android.view.View createGraphObjectView(T p0)
    {
      android.view.View v2;
      android.view.ViewStub v3;
      android.view.ViewStub v4;
      v2 = this.inflater.inflate(this.getGraphObjectRowLayoutId(p0), null);
      v3 = (android.view.ViewStub)v2.findViewById(2131427373);
      if ( v3 != null )
      {
        if ( this.getShowCheckbox() )
          this.updateCheckboxState((android.widget.CheckBox)v3.inflate(), false);
        else
          v3.setVisibility(8);
      }
      v4 = (android.view.ViewStub)v2.findViewById(2131427371);
      if ( this.getShowPicture() )
        ((android.widget.ImageView)v4.inflate()).setVisibility(0);
      else
        v4.setVisibility(8);
      return v2;
    }

    boolean filterIncludesItem(T p0)
    {
      return this.filter == null || this.filter.includeItem(p0);
    }

    public int getCount()
    {
      int v1;
      java.util.Iterator v3;
      int v4;
      v1 = 0;
      if ( this.sectionKeys.size() != 0 )
      {
        if ( this.displaySections )
          v1 = this.sectionKeys.size();
        v3 = this.graphObjectsBySection.values().iterator();
        v4 = v1;
        while ( v3.hasNext() )
          v4 += ((java.util.List)v3.next()).size();
        if ( this.shouldShowActivityCircleCell() )
          ++v4;
        return v4;
      }
      return v1;
    }

    public com.facebook.widget.GraphObjectCursor<T> getCursor()
    {
      return this.cursor;
    }

    public com.facebook.widget.GraphObjectAdapter$DataNeededListener getDataNeededListener()
    {
      return this.dataNeededListener;
    }

    protected int getDefaultPicture()
    {
      return 2130837550;
    }

    com.facebook.widget.GraphObjectAdapter$Filter<T> getFilter()
    {
      return this.filter;
    }

    protected int getGraphObjectRowLayoutId(T p0)
    {
      return 6;
    }

    protected android.view.View getGraphObjectView(
            T p0,
            android.view.View p1,
            android.view.ViewGroup p2)
    {
      if ( p1 == null )
        p1 = this.createGraphObjectView(p0);
      this.populateGraphObjectView(p1, p0);
      return p1;
    }

    public java.util.List<T> getGraphObjectsById(java.util.Collection<String> p0)
    {
      java.util.HashSet v2;
      java.util.ArrayList v3;
      java.util.Iterator v4;
      com.facebook.model.GraphObject v5;
      v2 = new java.util.HashSet();
      v2.addAll(p0);
      v3 = new java.util.ArrayList(v2.size());
      v4 = v2.iterator();
      while ( v4.hasNext() )
      {
        v5 = (com.facebook.model.GraphObject)this.graphObjectsById.get((String)v4.next());
        if ( v5 != null )
          v3.add(v5);
      }
      return v3;
    }

    public String getGroupByField()
    {
      return this.groupByField;
    }

    String getIdOfGraphObject(T p0)
    {
      Object Property; // RETVAL
    
      if ( !((com.facebook.model.GraphObject)p0).asMap().containsKey("id") || (com.gameloft.android.DecompRT.comma((Property = ((com.facebook.model.GraphObject)p0).getProperty("id")), (!(Property instanceof String)))) )
        throw new com.facebook.FacebookException("Received an object without an ID.");
      return (String)Property;
    }

    public Object getItem(int p0)
    {
      com.facebook.widget.GraphObjectAdapter$SectionAndItem SectionAndItem;
      SectionAndItem = this.getSectionAndItem(p0);
      if ( SectionAndItem.getType() == GraphObjectAdapter$SectionAndItem$Type.GRAPH_OBJECT )
        return SectionAndItem.graphObject;
      else
        return null;
    }

    public long getItemId(int p0)
    {
      com.facebook.widget.GraphObjectAdapter$SectionAndItem SectionAndItem; // RETVAL
      String IdOfGraphObject; // RETVAL
    
      SectionAndItem = this.getSectionAndItem(p0);
      if ( SectionAndItem != null && SectionAndItem.graphObject != null )
      {
        IdOfGraphObject = this.getIdOfGraphObject((T)SectionAndItem.graphObject);
        if ( IdOfGraphObject != null )
        {
          try
          {
            return Long.parseLong(IdOfGraphObject);
          }
          catch ( NumberFormatException e )
          {
          }
        }
      }
      return 0;
    }

    public int getItemViewType(int p0)
    {
      int v2;
      switch ( GraphObjectAdapter$3.$SwitchMap$com$facebook$widget$GraphObjectAdapter$SectionAndItem$Type[this.getSectionAndItem(p0).getType().ordinal()] )
      {
        case 1:
          v2 = 0;
          break;
        case 2:
          v2 = 1;
          break;
        case 3:
          v2 = 2;
          break;
        default:
          throw new com.facebook.FacebookException("Unexpected type of section and item.");
      }
      return v2;
    }

    public com.facebook.widget.GraphObjectAdapter$OnErrorListener getOnErrorListener()
    {
      return this.onErrorListener;
    }

    String getPictureFieldSpecifier()
    {
      android.widget.ImageView v1;
      android.view.ViewGroup.LayoutParams LayoutParams;
      Object[] v5;
      v1 = (android.widget.ImageView)this.createGraphObjectView(null).findViewById(2131427370);
      if ( v1 == null )
        return null;
      LayoutParams = v1.getLayoutParams();
      v5 = new Object[2];
      v5[0] = Integer.valueOf(LayoutParams.height);
      v5[1] = Integer.valueOf(LayoutParams.width);
      return String.format(Locale.US, "picture.height(%d).width(%d)", v5);
    }

    protected java.net.URI getPictureUriOfGraphObject(T p0)
    {
      Object Property; // RETVAL
      String Url;
      com.facebook.widget.GraphObjectAdapter$ItemPictureData Data; // RETVAL
    
      Property = ((com.facebook.model.GraphObject)p0).getProperty("picture");
      if ( Property instanceof String )
      {
        Url = (String)Property;
      }
      else if ( Property instanceof org.json.JSONObject
             && (Data = ((com.facebook.widget.GraphObjectAdapter$ItemPicture)GraphObject$Factory.create((org.json.JSONObject)Property).cast(com.facebook.widget.GraphObjectAdapter$ItemPicture.class)).getData()) != null )
      {
        Url = Data.getUrl();
      }
      else
      {
        Url = null;
      }
      if ( Url != null )
      {
        try
        {
          return new java.net.URI(Url);
        }
        catch ( java.net.URISyntaxException e )
        {
        }
      }
      return null;
    }

    int getPosition(String p0, T p1)
    {
      int v3 = 0;
      java.util.Iterator v4;
      int v5 = 0;
      String v6;
      int v7 = 0;
      java.util.Iterator v9;
      int _pc = 0;
      _sm: while (true) {
        switch (_pc) {
          case 0: {
            v3 = 0;
            v4 = this.sectionKeys.iterator();
            v5 = 0;
            while ( v4.hasNext() )
            {
            v6 = (String)v4.next();
            if ( this.displaySections )
            ++v5;
            if ( v6.equals(p0) )
            {
            v7 = 1;
            { _pc = 1; continue _sm; }
            }
            v5 += ((java.util.ArrayList)this.graphObjectsBySection.get(v6)).size();
            }
            v7 = 0;
            _pc = 1;
            continue _sm;
          }
          case 1: {
            if ( v7 == 0 )
            return -1;
            if ( p1 != null )
            {
            v9 = ((java.util.ArrayList)this.graphObjectsBySection.get(p0)).iterator();
            while ( v9.hasNext() )
            {
            if ( GraphObject$Factory.hasSameId((com.facebook.model.GraphObject)v9.next(), p1) )
            return v5;
            ++v5;
            }
            return -1;
            }
            else
            {
            if ( this.displaySections )
            v3 = 1;
            v5 -= v3;
            }
            return v5;
            
          }
          default: throw new IllegalStateException("Unreachable");
        }
      }
    }

    public int getPositionForSection(int p0)
    {
      int v2;
      int v3;
      v2 = 0;
      if ( this.displaySections )
      {
        v3 = Math.max(0, Math.min(p0, this.sectionKeys.size() - 1));
        if ( v3 < this.sectionKeys.size() )
          return this.getPosition((String)this.sectionKeys.get(v3), null);
      }
      return v2;
    }

    com.facebook.widget.GraphObjectAdapter$SectionAndItem<T> getSectionAndItem(int p0)
    {
      String v2 = null;
      String v5 = null;
      java.util.List v6 = null;
      com.facebook.model.GraphObject v7 = null;
      java.util.Iterator v8 = null;
      String v9 = null;
      int v10 = 0;
      java.util.List v11 = null;
      int _pc = 0;
      _sm:
      while ( true )
      {
        switch ( _pc )
        {
          case 0:
            v2 = null;
            if ( this.sectionKeys.size() == 0 )
            return null;
            if ( this.displaySections )
            {
            v8 = this.sectionKeys.iterator();
            while ( v8.hasNext() )
            {
            v9 = (String)v8.next();
            v10 = p0 - 1;
            if ( p0 == 0 )
            {
            v7 = null;
            v2 = v9;
            { _pc = 1; continue _sm; }
            }
            v11 = (java.util.List)this.graphObjectsBySection.get(v9);
            if ( v10 < v11.size() )
            {
            v7 = (com.facebook.model.GraphObject)v11.get(v10);
            v2 = v9;
            { _pc = 1; continue _sm; }
            }
            p0 = v10 - v11.size();
            }
            v7 = null;
            { _pc = 1; continue _sm; }
            }
            v5 = (String)this.sectionKeys.get(0);
            v6 = (java.util.List)this.graphObjectsBySection.get(v5);
            if ( !(p0 >= 0 && p0 < v6.size()) ) { _pc = 2; continue _sm; }
            v7 = (com.facebook.model.GraphObject)((java.util.ArrayList)this.graphObjectsBySection.get(v5)).get(p0);
            v2 = v5;
            _pc = 1;
            continue _sm;
          case 1:
            if ( v2 == null )
            throw new IndexOutOfBoundsException("position");
            return new com.facebook.widget.GraphObjectAdapter$SectionAndItem(v2, v7);
          case 2:
            if ( !$assertionsDisabled && (this.dataNeededListener == null || !this.cursor.areMoreObjectsAvailable()) )
            throw new AssertionError();
            return new com.facebook.widget.GraphObjectAdapter$SectionAndItem(null, null);
        }
      }
}

    public int getSectionForPosition(int p0)
    {
      int v2;
      com.facebook.widget.GraphObjectAdapter$SectionAndItem SectionAndItem; // RETVAL
      com.facebook.widget.GraphObjectAdapter$SectionAndItem v4;
      v2 = 0;
      SectionAndItem = this.getSectionAndItem(p0);
      v4 = SectionAndItem;
      if ( SectionAndItem != null && SectionAndItem.getType() != GraphObjectAdapter$SectionAndItem$Type.ACTIVITY_CIRCLE )
        return Math.max(0, Math.min(this.sectionKeys.indexOf(v4.sectionKey), this.sectionKeys.size() - 1));
      return v2;
    }

    protected android.view.View getSectionHeaderView(
            String p0,
            android.view.View p1,
            android.view.ViewGroup p2)
    {
      android.widget.TextView v4;
      android.widget.TextView v5;
      v4 = (android.widget.TextView)p1;
      if ( v4 != null )
        v5 = v4;
      else
        v5 = (android.widget.TextView)this.inflater.inflate(7, null);
      v5.setText(p0);
      return v5;
    }

    protected String getSectionKeyOfGraphObject(T p0)
    {
      String v2;
      v2 = null;
      if ( this.groupByField != null )
      {
        v2 = (String)((com.facebook.model.GraphObject)p0).getProperty(this.groupByField);
        if ( v2 != null && v2.length() > 0 )
          v2 = v2.substring(0, 1).toUpperCase();
      }
      if ( v2 == null )
        return "";
      return v2;
    }

    public Object[] getSections()
    {
      if ( this.displaySections )
        return this.sectionKeys.toArray();
      else
        return new Object[0];
    }

    public boolean getShowCheckbox()
    {
      return this.showCheckbox;
    }

    public boolean getShowPicture()
    {
      return this.showPicture;
    }

    public java.util.List<String> getSortFields()
    {
      return this.sortFields;
    }

    protected CharSequence getSubTitleOfGraphObject(T p0)
    {
      return null;
    }

    protected CharSequence getTitleOfGraphObject(T p0)
    {
      return (String)((com.facebook.model.GraphObject)p0).getProperty("name");
    }

    public android.view.View getView(int p0, android.view.View p1, android.view.ViewGroup p2)
    {
      com.facebook.widget.GraphObjectAdapter$SectionAndItem SectionAndItem;
      android.view.View SectionHeaderView;
      SectionAndItem = this.getSectionAndItem(p0);
      switch ( GraphObjectAdapter$3.$SwitchMap$com$facebook$widget$GraphObjectAdapter$SectionAndItem$Type[SectionAndItem.getType().ordinal()] )
      {
        case 1:
          SectionHeaderView = this.getSectionHeaderView(SectionAndItem.sectionKey, p1, p2);
          break;
        case 2:
          SectionHeaderView = this.getGraphObjectView((T)SectionAndItem.graphObject, p1, p2);
          break;
        case 3:
          if ( !$assertionsDisabled && (!this.cursor.areMoreObjectsAvailable() || this.dataNeededListener == null) )
            throw new AssertionError();
          this.dataNeededListener.onDataNeeded();
          SectionHeaderView = this.getActivityCircleView(p1, p2);
          break;
        default:
          throw new com.facebook.FacebookException("Unexpected type of section and item.");
      }
      return SectionHeaderView;
    }

    public int getViewTypeCount()
    {
      return 3;
    }

    public boolean hasStableIds()
    {
      return true;
    }

    public boolean isEmpty()
    {
      return this.sectionKeys.size() == 0;
    }

    public boolean isEnabled(int p0)
    {
      return this.getSectionAndItem(p0).getType() == GraphObjectAdapter$SectionAndItem$Type.GRAPH_OBJECT;
    }

    boolean isGraphObjectSelected(String p0)
    {
      return false;
    }

    protected void populateGraphObjectView(android.view.View p0, T p1)
    {
      String IdOfGraphObject;
      CharSequence TitleOfGraphObject;
      android.widget.TextView v5;
      CharSequence SubTitleOfGraphObject;
      android.widget.TextView v7;
      java.net.URI PictureUriOfGraphObject;
      android.widget.ImageView v9;
      com.facebook.internal.ImageResponse v10;
      IdOfGraphObject = this.getIdOfGraphObject(p1);
      p0.setTag(IdOfGraphObject);
      TitleOfGraphObject = this.getTitleOfGraphObject(p1);
      v5 = (android.widget.TextView)p0.findViewById(2131427372);
      if ( v5 != null )
        v5.setText(TitleOfGraphObject, TextView.BufferType.SPANNABLE);
      SubTitleOfGraphObject = this.getSubTitleOfGraphObject(p1);
      v7 = (android.widget.TextView)p0.findViewById(2131427382);
      if ( v7 != null )
      {
        if ( SubTitleOfGraphObject != null )
        {
          v7.setText(SubTitleOfGraphObject, TextView.BufferType.SPANNABLE);
          v7.setVisibility(0);
        }
        else
        {
          v7.setVisibility(8);
        }
      }
      if ( this.getShowCheckbox() )
        this.updateCheckboxState((android.widget.CheckBox)p0.findViewById(2131427369), this.isGraphObjectSelected(IdOfGraphObject));
      if ( this.getShowPicture() )
      {
        PictureUriOfGraphObject = this.getPictureUriOfGraphObject(p1);
        if ( PictureUriOfGraphObject != null )
        {
          v9 = (android.widget.ImageView)p0.findViewById(2131427370);
          if ( this.prefetchedPictureCache.containsKey(IdOfGraphObject) )
          {
            v10 = (com.facebook.internal.ImageResponse)this.prefetchedPictureCache.get(IdOfGraphObject);
            v9.setImageBitmap(v10.getBitmap());
            v9.setTag(v10.getRequest().getImageUri());
          }
          else
          {
            this.downloadProfilePicture(IdOfGraphObject, PictureUriOfGraphObject, v9);
          }
        }
      }
    }

    public void prioritizeViewRange(int p0, int p1, int p2)
    {
      int i;
      com.facebook.widget.GraphObjectAdapter$SectionAndItem SectionAndItem; // RETVAL
      com.facebook.internal.ImageRequest v6;
      int v7;
      int v8;
      java.util.ArrayList v9;
      com.facebook.widget.GraphObjectAdapter$SectionAndItem v10; // RETVAL
      int j;
      com.facebook.widget.GraphObjectAdapter$SectionAndItem v12; // RETVAL
      java.util.Iterator v13;
      com.facebook.model.GraphObject v14;
      java.net.URI PictureUriOfGraphObject;
      String IdOfGraphObject;
      boolean v17;
      if ( p1 >= p0 && this.sectionKeys.size() != 0 )
      {
        for ( i = p1; i >= 0; --i )
        {
          SectionAndItem = this.getSectionAndItem(i);
          if ( SectionAndItem.graphObject != null )
          {
            v6 = (com.facebook.internal.ImageRequest)this.pendingRequests.get(this.getIdOfGraphObject((T)SectionAndItem.graphObject));
            if ( v6 != null )
              ImageDownloader.prioritizeRequest(v6);
          }
        }
        v7 = Math.max(0, p0 - p2);
        v8 = Math.min(p1 + p2, this.getCount() - 1);
        v9 = new java.util.ArrayList();
        while ( v7 < p0 )
        {
          v10 = this.getSectionAndItem(v7);
          if ( v10.graphObject != null )
            v9.add(v10.graphObject);
          ++v7;
        }
        for ( j = p1 + 1; j <= v8; ++j )
        {
          v12 = this.getSectionAndItem(j);
          if ( v12.graphObject != null )
            v9.add(v12.graphObject);
        }
        v13 = v9.iterator();
        while ( v13.hasNext() )
        {
          v14 = (com.facebook.model.GraphObject)v13.next();
          PictureUriOfGraphObject = this.getPictureUriOfGraphObject((T)v14);
          IdOfGraphObject = this.getIdOfGraphObject((T)v14);
          v17 = this.prefetchedProfilePictureIds.remove(IdOfGraphObject);
          this.prefetchedProfilePictureIds.add(IdOfGraphObject);
          if ( !v17 )
            this.downloadProfilePicture(IdOfGraphObject, PictureUriOfGraphObject, null);
        }
      }
    }

    public void rebuildAndNotify()
    {
      this.rebuildSections();
      this.notifyDataSetChanged();
    }

    public void setDataNeededListener(com.facebook.widget.GraphObjectAdapter$DataNeededListener p0)
    {
      this.dataNeededListener = p0;
    }

    void setFilter(com.facebook.widget.GraphObjectAdapter$Filter<T> p0)
    {
      this.filter = p0;
    }

    public void setGroupByField(String p0)
    {
      this.groupByField = p0;
    }

    public void setOnErrorListener(com.facebook.widget.GraphObjectAdapter$OnErrorListener p0)
    {
      this.onErrorListener = p0;
    }

    public void setShowCheckbox(boolean p0)
    {
      this.showCheckbox = p0;
    }

    public void setShowPicture(boolean p0)
    {
      this.showPicture = p0;
    }

    public void setSortFields(java.util.List<String> p0)
    {
      this.sortFields = p0;
    }

    void updateCheckboxState(android.widget.CheckBox p0, boolean p1)
    {
      ;
    }

}
