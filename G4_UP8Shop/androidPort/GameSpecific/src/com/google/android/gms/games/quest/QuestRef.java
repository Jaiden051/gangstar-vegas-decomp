// Decompiled from classes.dex (SourceFile: QuestRef.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.games.quest;

public final class QuestRef extends com.google.android.gms.common.data.d implements com.google.android.gms.games.quest.Quest {
    // Fields
    private final com.google.android.gms.games.Game j;
    private final int k;

    // Methods
    QuestRef(com.google.android.gms.common.data.DataHolder p0, int p1, int p2)
    {
      super(p0, p1);
      this.j = (com.google.android.gms.games.Game)new com.google.android.gms.games.GameRef(p0, p1);
      this.k = p2;
    }

    private com.google.android.gms.games.quest.Quest u()
    {
      return (com.google.android.gms.games.quest.Quest)new com.google.android.gms.games.quest.QuestEntity((com.google.android.gms.games.quest.Quest)this);
    }

    public final String a()
    {
      return this.e("external_quest_id");
    }

    public final void a(android.database.CharArrayBuffer p0)
    {
      this.a("quest_name", p0);
    }

    public final String b()
    {
      return this.e("quest_name");
    }

    public final void b(android.database.CharArrayBuffer p0)
    {
      this.a("quest_description", p0);
    }

    public final String c()
    {
      return this.e("quest_description");
    }

    public final android.net.Uri d()
    {
      return this.h("quest_banner_image_uri");
    }

    public final int describeContents()
    {
      return 0;
    }

    public final String e()
    {
      return this.e("quest_banner_image_url");
    }

    public final boolean equals(Object p0)
    {
      return QuestEntity.a((com.google.android.gms.games.quest.Quest)this, p0);
    }

    public final android.net.Uri f()
    {
      return this.h("quest_icon_image_uri");
    }

    /* synthetic */ public final Object h()
    {
      return this.u();
    }

    public final int hashCode()
    {
      return QuestEntity.a((com.google.android.gms.games.quest.Quest)this);
    }

    public final com.google.android.gms.games.quest.Milestone j()
    {
      return (com.google.android.gms.games.quest.Milestone)this.k().get(0);
    }

    public final java.util.List<com.google.android.gms.games.quest.Milestone> k()
    {
      java.util.ArrayList v1;
      int i;
      v1 = new java.util.ArrayList(this.k);
      for ( i = 0; i < this.k; ++i )
        v1.add(new com.google.android.gms.games.quest.MilestoneRef(this.v_, this.z_ + i));
      return v1;
    }

    public final com.google.android.gms.games.Game l()
    {
      return this.j;
    }

    public final int m()
    {
      return this.c("quest_state");
    }

    public final int n()
    {
      return this.c("quest_type");
    }

    public final long o()
    {
      return this.b("accepted_ts");
    }

    public final long p()
    {
      return this.b("quest_end_ts");
    }

    public final long q()
    {
      return this.b("quest_last_updated_ts");
    }

    public final long r()
    {
      return this.b("notification_ts");
    }

    public final long s()
    {
      return this.b("quest_start_ts");
    }

    public final boolean t()
    {
      return this.b("notification_ts") <= System.currentTimeMillis() + 1800000;
    }

    public final String toString()
    {
      return QuestEntity.b((com.google.android.gms.games.quest.Quest)this);
    }

    public final String w_()
    {
      return this.e("quest_icon_image_url");
    }

    public final void writeToParcel(android.os.Parcel p0, int p1)
    {
      ((com.google.android.gms.games.quest.QuestEntity)this.u()).writeToParcel(p0, p1);
    }

}
