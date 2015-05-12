/* Declaration as Addon-Content.*/
class CfgPatches 		{
	class OFA_groups	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 1.00;
		requiredAddons[] = {};
	};
};


class CfgGroups {
	class West {
		name="BLUEFOR";

		class OFAbleuforCDC {
			name="OFCRA_B CDC+MED+RIF";

			class Unit0 {
				description="Chef de Camp";
				side=1;
				vehicle="B_officer_F";
				rank="SERGEANT";
				position[]={0,5,0};
			};
       
			class Unit1 {
				description="Medecin";
				side=1;
				vehicle="B_medic_F";
				rank="PRIVATE";
				position[]={0,5,0};
			};
       
			class Unit2 {
				description="Fusilier";
				side=1;
				vehicle="B_Soldier_F";
				rank="PRIVATE";
				position[]={7,0,0};
			};
		};
		
		
		class OFAbleuforReco {
			name="OFCRA_B Reco CDE+SPOT+SNIP";

			class Unit0 {
				description="Chef d'Equipe";
				side=1;
				vehicle="B_Soldier_TL_F";
				rank="SERGEANT";
				position[]={0,5,0};
			};
       
			class Unit1 {
				description="Sniper";
				side=1;
				vehicle="B_sniper_F";
				rank="PRIVATE";
				position[]={0,5,0};
			};
       
			class Unit2 {
				description="Spotter";
				side=1;
				vehicle="B_spotter_F";
				rank="PRIVATE";
				position[]={7,0,0};
			};
		};
	};
	
	class East {
		name="OPFOR";

		class OFAredforCDC {
			name="OFCRA_R CDC+MED+2xRIF";

			class Unit0 {
				description="Chef de Camp";
				side=0;
				vehicle="O_officer_F";
				rank="SERGEANT";
				position[]={0,5,0};
			};
       
			class Unit1 {
				description="Medecin";
				side=0;
				vehicle="O_medic_F";
				rank="PRIVATE";
				position[]={0,5,0};
			};
       
			class Unit2 {
				description="Fusilier";
				side=0;
				vehicle="O_Soldier_F";
				rank="PRIVATE";
				position[]={7,0,0};
			};
			
			class Unit3{
				description="Fusilier";
				side=0;
				vehicle="O_Soldier_F";
				rank="PRIVATE";
				position[]={9,0,0};
			};
		};
	};
};  
