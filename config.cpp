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
		class OFCRA {
			name="OFCRA";
			
			class Infantry {
				name = "Infantry";
				
				class CDC_LIGHT {
					name = "CDC + fusil. - 3 unit.";
					
					class Unit01 {
						vehicle = "B_officer_F";
						rank = "SERGEANT";
						side = 1;
						position[] = {0,0,0};
					};
					
					class Unit02 {
						vehicle = "B_medic_F";
						rank = "PRIVATE";
						side = 1;
						position[]={-1,-1,0};
					};
					
					class Unit03 {
						vehicle="B_Soldier_F";
						rank="PRIVATE";
						side=1;						
						position[]={1,-1,0};

					};
					
					class Unit04 {
						vehicle = "B_Soldier_F";
						rank = "SERGEANT";
						side = 1;
						position[] = {2,-2,0};
					};					
				};
				
				class CDC_HEAVY {
					name = "CDC + MG - 3 unit.";

					class Unit01 {
						vehicle = "B_officer_F";
						rank = "SERGEANT";
						side = 1;
						position[] = {0,0,0};
					};
					
					class Unit03 {
						vehicle = "B_support_AMG_F";
						rank = "PRIVATE";
						side = 1;
						position[] = {2,-2,0};
					};
					
					class Unit04 {
						vehicle = "B_support_AMG_F";
						rank = "PRIVATE";
						side = 1;
						position[]={-1,-1,0};
					};
					
					class Unit02 {
						vehicle="B_support_GMG_F";
						rank="CORPORAL";
						side=1;						
						position[]={1,-1,0};

					};
					
				};
				
				class COMBAT_LIGHT {
					name = "Combat - grenad. + MG legere - 6 unit.";
				};
				
				class COMBAT_HEAVY {
					name = "Combat - grenad. + MG lourde - 6 unit.";
				};
				
				class COMBAT_ATHEAVY {
					name = "Combat - grenad. + AT - 6 unit.";
				};
				
				class COMBAT_FULL {
					name = "Combat - complet - 8 unit.";
				};
				
				class RECO_LIGHT {
					name = "Reco - 2 unit.";
				};
				class RECO_HEAVY {
					name = "Reco - 5 unit.";
				};
			};
			
			class Armored {
				name = "Armored";
				
				class ARMORED_LIGHT {
					name = "Equipage - 2 unit.";
					
					class Unit01 {
						vehicle = "B_soldier_UAV_F";
						rank = "SERGEANT";
						side = 1;
						position[] = {0,0,0};
					};
					
					class Unit03 {
						vehicle = "B_crew_F";
						rank = "PRIVATE";
						side = 1;
						position[] = {2,-2,0};
					};
				};
				
				class ARMORED_MEDIUM {
					name = "Equipage - 3 unit.";
				};
				
				class ARMORED_HEAVY {
					name = "Equipage - 4 unit.";
				};
				
			};
			
			
			class Air {
				name = "Air";
				
				class AIR_LIGHT {
					name = "Equipage - 2 unit.";
					
					class Unit01 {
						vehicle = "B_Helipilot_F";
						rank = "SERGEANT";
						side = 1;
						position[] = {0,0,0};
					};
					
					class Unit03 {
						vehicle = "B_helicrew_F";
						rank = "PRIVATE";
						side = 1;
						position[] = {2,-2,0};
					};
				};
				
				class AIR_HEAVY {
					name = "Equipage - 4 unit.";
				};
				
			};
					
		};
	};
};  
