// Decompiled from classes.dex (SourceFile: PickerFragment.java) via IDA Pro 9.5 Dalvik Decompiler
package com.facebook.widget;

import android.text.TextUtils;
import com.facebook.model.GraphObject;
import com.gameloft.android.GAND.GloftGGSS.R$styleable;
import java.util.Arrays;
public abstract class PickerFragment<T> extends android.support.v4.app.Fragment {
    // Fields
    private static java.lang.String ACTIVITY_CIRCLE_SHOW_KEY;
    public static java.lang.String DONE_BUTTON_TEXT_BUNDLE_KEY;
    public static java.lang.String EXTRA_FIELDS_BUNDLE_KEY;
    private static int PROFILE_PICTURE_PREFETCH_BUFFER;
    private static java.lang.String SELECTION_BUNDLE_KEY;
    public static java.lang.String SHOW_PICTURES_BUNDLE_KEY;
    public static java.lang.String SHOW_TITLE_BAR_BUNDLE_KEY;
    public static java.lang.String TITLE_TEXT_BUNDLE_KEY;
    private android.widget.ProgressBar activityCircle;
    com.facebook.widget.GraphObjectAdapter adapter;
    private boolean appEventsLogged;
    private android.widget.Button doneButton;
    private android.graphics.drawable.Drawable doneButtonBackground;
    private java.lang.String doneButtonText;
    java.util.HashSet extraFields;
    private com.facebook.widget.PickerFragment$GraphObjectFilter filter;
    private final java.lang.Class graphObjectClass;
    private final int layout;
    private android.widget.ListView listView;
    private com.facebook.widget.PickerFragment$LoadingStrategy loadingStrategy;
    private com.facebook.widget.PickerFragment$OnDataChangedListener onDataChangedListener;
    private com.facebook.widget.PickerFragment$OnDoneButtonClickedListener onDoneButtonClickedListener;
    private com.facebook.widget.PickerFragment$OnErrorListener onErrorListener;
    private android.widget.AbsListView.OnScrollListener onScrollListener;
    private com.facebook.widget.PickerFragment$OnSelectionChangedListener onSelectionChangedListener;
    private java.util.Set selectionHint;
    private com.facebook.widget.PickerFragment$SelectionStrategy selectionStrategy;
    private com.facebook.internal.SessionTracker sessionTracker;
    private boolean showPictures;
    private boolean showTitleBar;
    private android.graphics.drawable.Drawable titleBarBackground;
    private java.lang.String titleText;
    private android.widget.TextView titleTextView;

    // Methods
    PickerFragment(Class<T> p0, int p1, android.os.Bundle p2)
    {
      super();
      this.showPictures = true;
      this.showTitleBar = true;
      this.extraFields = new java.util.HashSet();
      this.onScrollListener = (android.widget.AbsListView.OnScrollListener)new com.facebook.widget.PickerFragment$6(this);
      this.graphObjectClass = p0;
      this.layout = p1;
      this.setPickerFragmentSettingsFromBundle(p2);
    }

    /* synthetic */ static void access$000(
            com.facebook.widget.PickerFragment p0,
            android.widget.ListView p1,
            android.view.View p2,
            int p3)
    {
      p0.onListItemClick(p1, p2, p3);
    }

    /* synthetic */ static void access$100(com.facebook.widget.PickerFragment p0)
    {
      p0.clearResults();
    }

    /* synthetic */ static boolean access$202(com.facebook.widget.PickerFragment p0, boolean p1)
    {
      p0.appEventsLogged = p1;
      return p1;
    }

    /* synthetic */ static com.facebook.widget.PickerFragment$OnDoneButtonClickedListener access$300(
            com.facebook.widget.PickerFragment p0)
    {
      return p0.onDoneButtonClickedListener;
    }

    /* synthetic */ static void access$400(com.facebook.widget.PickerFragment p0)
    {
      p0.reprioritizeDownloads();
    }

    /* synthetic */ static com.facebook.widget.PickerFragment$OnErrorListener access$500(
            com.facebook.widget.PickerFragment p0)
    {
      return p0.onErrorListener;
    }

    /* synthetic */ static Class access$600(com.facebook.widget.PickerFragment p0)
    {
      return p0.graphObjectClass;
    }

    /* synthetic */ static com.facebook.widget.PickerFragment$SelectionStrategy access$700(
            com.facebook.widget.PickerFragment p0)
    {
      return p0.selectionStrategy;
    }

    private void clearResults()
    {
      boolean v1;
      boolean v2;
      if ( this.adapter != null )
      {
        v1 = !this.selectionStrategy.isEmpty();
        v2 = !this.adapter.isEmpty();
        this.loadingStrategy.clearResults();
        this.selectionStrategy.clear();
        this.adapter.notifyDataSetChanged();
        if ( v2 && this.onDataChangedListener != null )
          this.onDataChangedListener.onDataChanged(this);
        if ( v1 && this.onSelectionChangedListener != null )
          this.onSelectionChangedListener.onSelectionChanged(this);
      }
    }

    private void inflateTitleBar(android.view.ViewGroup p0)
    {
      android.view.ViewStub v2;
      android.view.View v3; // RETVAL
      android.widget.RelativeLayout.LayoutParams v4;
      v2 = (android.view.ViewStub)p0.findViewById(2131427378);
      if ( v2 != null )
      {
        v3 = v2.inflate();
        v4 = new android.widget.RelativeLayout.LayoutParams(-1, -1);
        v4.addRule(3, 2131427379);
        this.listView.setLayoutParams(v4);
        if ( this.titleBarBackground != null )
          v3.setBackgroundDrawable(this.titleBarBackground);
        this.doneButton = (android.widget.Button)p0.findViewById(2131427376);
        if ( this.doneButton != null )
        {
          this.doneButton.setOnClickListener((android.view.View.OnClickListener)new com.facebook.widget.PickerFragment$5(this));
          if ( this.getDoneButtonText() != null )
            this.doneButton.setText(this.getDoneButtonText());
          if ( this.doneButtonBackground != null )
            this.doneButton.setBackgroundDrawable(this.doneButtonBackground);
        }
        this.titleTextView = (android.widget.TextView)p0.findViewById(2131427372);
        if ( this.titleTextView != null && this.getTitleText() != null )
          this.titleTextView.setText(this.getTitleText());
      }
    }

    private void loadDataSkippingRoundTripIfCached()
    {
      com.facebook.Request RequestForLoadData; // RETVAL
    
      this.clearResults();
      RequestForLoadData = this.getRequestForLoadData(this.getSession());
      if ( RequestForLoadData != null )
      {
        this.onLoadingData();
        this.loadingStrategy.startLoading(RequestForLoadData);
      }
    }

    private void onListItemClick(android.widget.ListView p0, android.view.View p1, int p2)
    {
      this.selectionStrategy.toggleSelection(this.adapter.getIdOfGraphObject((com.facebook.model.GraphObject)p0.getItemAtPosition(p2)));
      this.adapter.notifyDataSetChanged();
      if ( this.onSelectionChangedListener != null )
        this.onSelectionChangedListener.onSelectionChanged(this);
    }

    private void reprioritizeDownloads()
    {
      int LastVisiblePosition;
      LastVisiblePosition = this.listView.getLastVisiblePosition();
      if ( LastVisiblePosition >= 0 )
        this.adapter.prioritizeViewRange(this.listView.getFirstVisiblePosition(), LastVisiblePosition, 5);
    }

    private static void setAlpha(android.view.View p0, float p1)
    {
      android.view.animation.AlphaAnimation v2;
      v2 = new android.view.animation.AlphaAnimation(p1, p1);
      v2.setDuration(0);
      v2.setFillAfter(true);
      p0.startAnimation(v2);
    }

    private void setPickerFragmentSettingsFromBundle(android.os.Bundle p0)
    {
      String String; // RETVAL
      String v3; // RETVAL
      String v4; // RETVAL
    
      if ( p0 != null )
      {
        this.showPictures = p0.getBoolean("com.facebook.widget.PickerFragment.ShowPictures", this.showPictures);
        String = p0.getString("com.facebook.widget.PickerFragment.ExtraFields");
        if ( String != null )
          this.setExtraFields(Arrays.asList(String.split(",")));
        this.showTitleBar = p0.getBoolean("com.facebook.widget.PickerFragment.ShowTitleBar", this.showTitleBar);
        v3 = p0.getString("com.facebook.widget.PickerFragment.TitleText");
        if ( v3 != null )
        {
          this.titleText = v3;
          if ( this.titleTextView != null )
            this.titleTextView.setText(this.titleText);
        }
        v4 = p0.getString("com.facebook.widget.PickerFragment.DoneButtonText");
        if ( v4 != null )
        {
          this.doneButtonText = v4;
          if ( this.doneButton != null )
            this.doneButton.setText(this.doneButtonText);
        }
      }
    }

    abstract com.facebook.widget.PickerFragment$PickerFragmentAdapter createAdapter();

    abstract com.facebook.widget.PickerFragment$LoadingStrategy createLoadingStrategy();

    abstract com.facebook.widget.PickerFragment$SelectionStrategy createSelectionStrategy();

    void displayActivityCircle()
    {
      if ( this.activityCircle != null )
      {
        this.layoutActivityCircle();
        this.activityCircle.setVisibility(0);
      }
    }

    boolean filterIncludesItem(T p0)
    {
      return this.filter == null || this.filter.includeItem(p0);
    }

    String getDefaultDoneButtonText()
    {
      return this.getString(2131165511);
    }

    String getDefaultTitleText()
    {
      return null;
    }

    public String getDoneButtonText()
    {
      if ( this.doneButtonText == null )
        this.doneButtonText = this.getDefaultDoneButtonText();
      return this.doneButtonText;
    }

    public java.util.Set<String> getExtraFields()
    {
      return new java.util.HashSet(this.extraFields);
    }

    public com.facebook.widget.PickerFragment$GraphObjectFilter<T> getFilter()
    {
      return this.filter;
    }

    public com.facebook.widget.PickerFragment$OnDataChangedListener getOnDataChangedListener()
    {
      return this.onDataChangedListener;
    }

    public com.facebook.widget.PickerFragment$OnDoneButtonClickedListener getOnDoneButtonClickedListener()
    {
      return this.onDoneButtonClickedListener;
    }

    public com.facebook.widget.PickerFragment$OnErrorListener getOnErrorListener()
    {
      return this.onErrorListener;
    }

    public com.facebook.widget.PickerFragment$OnSelectionChangedListener getOnSelectionChangedListener()
    {
      return this.onSelectionChangedListener;
    }

    abstract com.facebook.Request getRequestForLoadData(com.facebook.Session p0);

    java.util.List<T> getSelectedGraphObjects()
    {
      return this.adapter.getGraphObjectsById(this.selectionStrategy.getSelectedIds());
    }

    public com.facebook.Session getSession()
    {
      return this.sessionTracker.getSession();
    }

    public boolean getShowPictures()
    {
      return this.showPictures;
    }

    public boolean getShowTitleBar()
    {
      return this.showTitleBar;
    }

    public String getTitleText()
    {
      if ( this.titleText == null )
        this.titleText = this.getDefaultTitleText();
      return this.titleText;
    }

    void hideActivityCircle()
    {
      if ( this.activityCircle != null )
      {
        this.activityCircle.clearAnimation();
        this.activityCircle.setVisibility(4);
      }
    }

    void layoutActivityCircle()
    {
      float v1;
      if ( this.adapter.isEmpty() )
        v1 = 1.0f;
      else
        v1 = 0.25f;
      setAlpha(this.activityCircle, v1);
    }

    public void loadData(boolean p0)
    {
      this.loadData(p0, null);
    }

    public void loadData(boolean p0, java.util.Set<String> p1)
    {
      if ( p0 || !this.loadingStrategy.isDataPresentOrLoading() )
      {
        this.selectionHint = p1;
        this.loadDataSkippingRoundTripIfCached();
      }
    }

    void logAppEvents(boolean p0)
    {
      ;
    }

    public void onActivityCreated(android.os.Bundle p0)
    {
      super.onActivityCreated(p0);
      this.sessionTracker = new com.facebook.internal.SessionTracker(this.getActivity(), (com.facebook.Session$StatusCallback)new com.facebook.widget.PickerFragment$4(this));
      this.setSettingsFromBundle(p0);
      this.loadingStrategy = this.createLoadingStrategy();
      this.loadingStrategy.attach(this.adapter);
      this.selectionStrategy = this.createSelectionStrategy();
      this.selectionStrategy.readSelectionFromBundle(p0, "com.facebook.android.PickerFragment.Selection");
      if ( this.showTitleBar )
        this.inflateTitleBar((android.view.ViewGroup)this.getView());
      if ( this.activityCircle != null && p0 != null )
      {
        if ( p0.getBoolean("com.facebook.android.PickerFragment.ActivityCircleShown", false) )
          this.displayActivityCircle();
        else
          this.hideActivityCircle();
      }
    }

    public void onCreate(android.os.Bundle p0)
    {
      super.onCreate(p0);
      this.adapter = this.createAdapter();
      this.adapter.setFilter((com.facebook.widget.GraphObjectAdapter$Filter)new com.facebook.widget.PickerFragment$1(this));
    }

    public android.view.View onCreateView(
            android.view.LayoutInflater p0,
            android.view.ViewGroup p1,
            android.os.Bundle p2)
    {
      android.view.ViewGroup v4;
      v4 = (android.view.ViewGroup)p0.inflate(this.layout, p1, false);
      this.listView = (android.widget.ListView)v4.findViewById(2131427365);
      this.listView.setOnItemClickListener((android.widget.AdapterView.OnItemClickListener)new com.facebook.widget.PickerFragment$2(this));
      this.listView.setOnLongClickListener((android.view.View.OnLongClickListener)new com.facebook.widget.PickerFragment$3(this));
      this.listView.setOnScrollListener(this.onScrollListener);
      this.activityCircle = (android.widget.ProgressBar)v4.findViewById(2131427366);
      this.setupViews(v4);
      this.listView.setAdapter(this.adapter);
      return v4;
    }

    public void onDetach()
    {
      super.onDetach();
      this.listView.setOnScrollListener(null);
      this.listView.setAdapter(null);
      this.loadingStrategy.detach();
      this.sessionTracker.stopTracking();
    }

    public void onInflate(android.app.Activity p0, android.util.AttributeSet p1, android.os.Bundle p2)
    {
      android.content.res.TypedArray v4;
      String String; // RETVAL
    
      super.onInflate(p0, p1, p2);
      v4 = p0.obtainStyledAttributes(p1, R$styleable.X);
      this.setShowPictures(v4.getBoolean(0, this.showPictures));
      String = v4.getString(1);
      if ( String != null )
        this.setExtraFields(Arrays.asList(String.split(",")));
      this.showTitleBar = v4.getBoolean(2, this.showTitleBar);
      this.titleText = v4.getString(3);
      this.doneButtonText = v4.getString(4);
      this.titleBarBackground = v4.getDrawable(5);
      this.doneButtonBackground = v4.getDrawable(6);
      v4.recycle();
    }

    void onLoadingData()
    {
      ;
    }

    public void onSaveInstanceState(android.os.Bundle p0)
    {
      super.onSaveInstanceState(p0);
      this.saveSettingsToBundle(p0);
      this.selectionStrategy.saveSelectionToBundle(p0, "com.facebook.android.PickerFragment.Selection");
      if ( this.activityCircle != null )
        p0.putBoolean("com.facebook.android.PickerFragment.ActivityCircleShown", this.activityCircle.getVisibility() == 0);
    }

    public void onStop()
    {
      if ( !this.appEventsLogged )
        this.logAppEvents(false);
      super.onStop();
    }

    void saveSettingsToBundle(android.os.Bundle p0)
    {
      p0.putBoolean("com.facebook.widget.PickerFragment.ShowPictures", this.showPictures);
      if ( !this.extraFields.isEmpty() )
        p0.putString("com.facebook.widget.PickerFragment.ExtraFields", TextUtils.join(",", this.extraFields));
      p0.putBoolean("com.facebook.widget.PickerFragment.ShowTitleBar", this.showTitleBar);
      p0.putString("com.facebook.widget.PickerFragment.TitleText", this.titleText);
      p0.putString("com.facebook.widget.PickerFragment.DoneButtonText", this.doneButtonText);
    }

    public void setArguments(android.os.Bundle p0)
    {
      super.setArguments(p0);
      this.setSettingsFromBundle(p0);
    }

    public void setDoneButtonText(String p0)
    {
      this.doneButtonText = p0;
    }

    public void setExtraFields(java.util.Collection<String> p0)
    {
      this.extraFields = new java.util.HashSet();
      if ( p0 != null )
        this.extraFields.addAll(p0);
    }

    public void setFilter(com.facebook.widget.PickerFragment$GraphObjectFilter<T> p0)
    {
      this.filter = p0;
    }

    public void setOnDataChangedListener(com.facebook.widget.PickerFragment$OnDataChangedListener p0)
    {
      this.onDataChangedListener = p0;
    }

    public void setOnDoneButtonClickedListener(
            com.facebook.widget.PickerFragment$OnDoneButtonClickedListener p0)
    {
      this.onDoneButtonClickedListener = p0;
    }

    public void setOnErrorListener(com.facebook.widget.PickerFragment$OnErrorListener p0)
    {
      this.onErrorListener = p0;
    }

    public void setOnSelectionChangedListener(
            com.facebook.widget.PickerFragment$OnSelectionChangedListener p0)
    {
      this.onSelectionChangedListener = p0;
    }

    void setSelectedGraphObjects(java.util.List<String> p0)
    {
      java.util.Iterator v2;
      String v3;
      v2 = p0.iterator();
      while ( v2.hasNext() )
      {
        v3 = (String)v2.next();
        if ( !this.selectionStrategy.isSelected(v3) )
          this.selectionStrategy.toggleSelection(v3);
      }
    }

    void setSelectionStrategy(com.facebook.widget.PickerFragment$SelectionStrategy p0)
    {
      if ( p0 != this.selectionStrategy )
      {
        this.selectionStrategy = p0;
        if ( this.adapter != null )
          this.adapter.notifyDataSetChanged();
      }
    }

    public void setSession(com.facebook.Session p0)
    {
      this.sessionTracker.setSession(p0);
    }

    public void setSettingsFromBundle(android.os.Bundle p0)
    {
      this.setPickerFragmentSettingsFromBundle(p0);
    }

    public void setShowPictures(boolean p0)
    {
      this.showPictures = p0;
    }

    public void setShowTitleBar(boolean p0)
    {
      this.showTitleBar = p0;
    }

    public void setTitleText(String p0)
    {
      this.titleText = p0;
    }

    void setupViews(android.view.ViewGroup p0)
    {
      ;
    }

    void updateAdapter(com.facebook.widget.SimpleGraphObjectCursor<T> p0)
    {
      int v2 = 0;
      android.view.View ChildAt = null;
      int FirstVisiblePosition = 0; // RETVAL
      int v5 = 0;
      com.facebook.widget.GraphObjectAdapter$SectionAndItem SectionAndItem = null; // RETVAL
      com.facebook.widget.GraphObjectAdapter$SectionAndItem v7 = null;
      int Top = 0;
      boolean v9 = false;
      int Position = 0; // RETVAL
      int i = 0;
      com.facebook.model.GraphObject GraphObject = null;
      Object Property = null; // RETVAL
      String v14 = null;
      int v15 = 0;
      int _pc = 0;
      _sm:
      while ( true )
      {
        switch ( _pc )
        {
          case 0:
            v2 = 0;
            if ( !(this.adapter != null) ) { _pc = 2; continue _sm; }
            ChildAt = this.listView.getChildAt(1);
            FirstVisiblePosition = this.listView.getFirstVisiblePosition();
            v5 = FirstVisiblePosition;
            if ( FirstVisiblePosition > 0 )
            v5 = FirstVisiblePosition + 1;
            SectionAndItem = this.adapter.getSectionAndItem(v5);
            v7 = SectionAndItem;
            if ( ChildAt == null || SectionAndItem.getType() == GraphObjectAdapter$SectionAndItem$Type.ACTIVITY_CIRCLE )
            Top = 0;
            else
            Top = ChildAt.getTop();
            v9 = this.adapter.changeCursor((com.facebook.widget.GraphObjectCursor)p0);
            if ( ChildAt != null && v7 != null )
            {
            Position = this.adapter.getPosition(v7.sectionKey, v7.graphObject);
            if ( Position != -1 )
            this.listView.setSelectionFromTop(Position, Top);
            }
            if ( v9 && this.onDataChangedListener != null )
            this.onDataChangedListener.onDataChanged(this);
            if ( !(this.selectionHint != null && !this.selectionHint.isEmpty() && p0 != null) ) { _pc = 2; continue _sm; }
            p0.moveToFirst();
            for ( i = 0; i < p0.getCount(); ++i )
            {
            p0.moveToPosition(i);
            GraphObject = p0.getGraphObject();
            if ( GraphObject.asMap().containsKey("id") )
            {
            Property = GraphObject.getProperty("id");
            if ( Property instanceof String )
            {
            v14 = (String)Property;
            if ( this.selectionHint.contains(v14) )
            {
            this.selectionStrategy.toggleSelection(v14);
            this.selectionHint.remove(v14);
            v15 = 1;
            }
            else
            {
            v15 = v2;
            }
            if ( this.selectionHint.isEmpty() )
            { _pc = 1; continue _sm; }
            v2 = v15;
            }
            }
            }
            v15 = v2;
            _pc = 1;
            continue _sm;
          case 1:
            if ( this.onSelectionChangedListener != null && v15 != 0 )
            this.onSelectionChangedListener.onSelectionChanged(this);
            _pc = 2;
            continue _sm;
          case 2:
            return;
        }
      }
}

}
