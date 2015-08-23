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
				name = "Groupes d'Infanterie";
				class INF_CMDT2_01 {
					name = "Commandement (2)";
					class Unit01 {
						vehicle = "B_officer_F";
						rank = "SERGEANT";
						side = 1;
						position[] = {0,0,0};
					};					
					class Unit02 {
						vehicle = "B_officer_F";
						rank = "CORPORAL";
						side = 1;
						position[] = {5,0,0};
					};					
				};
				class INF_CMDT4_01 {
					name = "Commandement + Escorte (4)";
					class Unit01 {
						vehicle = "B_officer_F";
						rank = "SERGEANT";
						side = 1;
						position[] = {0,0,0};
					};					
					class Unit02 {
						vehicle = "B_support_AMG_F";
						rank = "CORPORAL";
						side = 1;
						position[] = {5,-5,0};
					};					
					class Unit03 {
						vehicle = "B_support_GMG_F";
						rank = "CORPORAL";
						side = 1;
						position[]={-5,-5,0};
					};					
					class Unit04 {
						vehicle="B_recon_F";
						rank="CORPORAL";
						side=1;						
						position[]={0,-5,0};
					};
				};
				class INF_SNPR3_01 {
					name = "Sniper (3)";
					class Unit01 {
						vehicle = "B_Soldier_SL_F";
						rank = "SERGEANT";
						side = 1;
						position[] = {0,0,0};
					};
					class Unit02 {
						vehicle = "B_spotter_F";
						rank = "CORPORAL";
						side = 1;
						position[] = {5,-5,0};
					};					
					class Unit03 {
						vehicle = "B_sniper_F";
						rank = "CORPORAL";
						side = 1;
						position[] = {-5,-5,0};
					};
				};
				
				class INF_RECO_01 {
					name = "Reconnaissance (3)";					
					class Unit01 {
						vehicle = "B_Soldier_SL_F";
						rank = "SERGEANT";
						side = 1;
						position[] = {0,0,0};
					};					
					class Unit02 {
						vehicle = "B_recon_F";
						rank = "CORPORAL";
						side = 1;
						position[] = {5,-5,0};
					};					
					class Unit03 {
						vehicle = "B_recon_F";
						rank = "CORPORAL";
						side = 1;
						position[] = {-5,-5,0};
					};
				};
				
				class INF_DEMO4_01 {
					name = "Demolition (4)";					
					class Unit01 {
						vehicle = "B_Soldier_SL_F";
						rank = "SERGEANT";
						side = 1;
						position[] = {0,0,0};
					};					
					class Unit02 {
						vehicle = "B_soldier_exp_F";
						rank = "CORPORAL";
						side = 1;
						position[] = {5,-5,0};
					};					
					class Unit03 {
						vehicle = "B_soldier_exp_F";
						rank = "CORPORAL";
						side = 1;
						position[] = {-5,-5,0};
					};
					class Unit04 {
						vehicle = "B_Soldier_F";
						rank = "CORPORAL";
						side = 1;
						position[] = {0,-5,0};
					};
				};
					
				class INF_FSPE4_01 {
					name = "Forces Speciales (4)";					
					class Unit01 {
						vehicle = "B_Soldier_SL_F";
						rank = "SERGEANT";
						side = 1;
						position[] = {0,0,0};
					};					
					class Unit02 {
						vehicle = "B_soldier_AR_F";
						rank = "CORPORAL";
						side = 1;
						position[] = {-5,-5,0};
					};					
					class Unit03 {
						vehicle = "B_soldier_LAT_F";
						rank = "CORPORAL";
						side = 1;
						position[] = {5,-5,0};
					};
					class Unit04 {
						vehicle = "B_recon_F";
						rank = "CORPORAL";
						side = 1;
						position[] = {0,-5,0};
					};
				};
				
				class INF_SUPP4_01 {
					name = "Support (4)";					
					class Unit01 {
						vehicle = "B_Soldier_SL_F";
						rank = "SERGEANT";
						side = 1;
						position[] = {0,0,0};
					};					
					class Unit02 {
						vehicle = "B_Soldier_GL_F";
						rank = "CORPORAL";
						side = 1;
						position[] = {5,-5,0};
					};					
					class Unit03 {
						vehicle = "B_support_GMG_F";
						rank = "CORPORAL";
						side = 1;
						position[] = {-5,-5,0};
					};
					class Unit04 {
						vehicle = "B_soldier_LAT_F";
						rank = "CORPORAL";
						side = 1;
						position[] = {0,-5,0};
					};
				};
						
				class INF_CMBT6_01 {
					name = "Combat (6)";
					class Unit01 {
						vehicle = "B_Soldier_SL_F";
						rank = "SERGEANT";
						side = 1;
						position[] = {0,0,0};
					};
					class Unit02 {
						vehicle = "B_Soldier_GL_F";
						rank = "CORPORAL";
						side = 1;
						position[] = {5,-5,0};
					};
					class Unit03 {
						vehicle = "B_soldier_AR_F";
						rank = "CORPORAL";
						side = 1;
						position[] = {5,-10,0};
					};
					class Unit04 {
						vehicle = "B_Soldier_TL_F";
						rank = "SERGEANT";
						side = 1;
						position[] = {-5,-5,0};
					};					
					class Unit05 {
						vehicle = "B_soldier_AR_F";
						rank = "CORPORAL";
						side = 1;
						position[] = {-5,-10,0};
					};					
					class Unit06 {
						vehicle = "B_soldier_F";
						rank = "CORPORAL";
						side = 1;
						position[] = {0,-10,0};
					};
				};
				
				class INF_CMBT8_01 {
					name = "Combat Traditionnel (8)";					
					class Unit01 {
						vehicle = "B_Soldier_SL_F";
						rank = "SERGEANT";
						side = 1;
						position[] = {0,0,0};
					};					
					class Unit02 {
						vehicle = "B_Soldier_GL_F";
						rank = "CORPORAL";
						side = 1;
						position[] = {5,-5,0};
					};					
					class Unit03 {
						vehicle = "B_soldier_AR_F";
						rank = "CORPORAL";
						side = 1;
						position[] = {5,-10,0};
					};					
					class Unit04 {
						vehicle = "B_soldier_AT_F";
						rank = "CORPORAL";
						side = 1;
						position[] = {10,-10,0};
					};					
					class Unit05 {
						vehicle = "B_Soldier_TL_F";
						rank = "CORPORAL";
						side = 1;
						position[] = {0,-10,0};
					};					
					class Unit06 {
						vehicle = "B_soldier_M_F";
						rank = "CORPORAL";
						side = 1;
						position[] = {-5,-5,0};
					};					
					class Unit07 {
						vehicle = "B_medic_F";
						rank = "CORPORAL";
						side = 1;
						position[] = {-5,-10,0};
					};					
					class Unit08 {
						vehicle = "B_Soldier_F";
						rank = "CORPORAL";
						side = 1;
						position[] = {-10,-10,0};
					};
				};
				
				class INF_CMBT8_02 {
					name = "Combat Polyvalent (8)";
					class Unit01 {
						vehicle = "B_Soldier_SL_F";
						rank = "SERGEANT";
						side = 1;
						position[] = {0,0,0};
					};					
					class Unit02 {
						vehicle = "B_Soldier_TL_F";
						rank = "CORPORAL";
						side = 1;
						position[] = {5,-5,0};
					};					
					class Unit03 {
						vehicle = "B_medic_F";
						rank = "CORPORAL";
						side = 1;
						position[] = {5,-10,0};
					};					
					class Unit04 {
						vehicle = "B_soldier_AT_F";
						rank = "CORPORAL";
						side = 1;
						position[] = {10,-10,0};
					};					
					class Unit05 {
						vehicle = "B_Soldier_GL_F";
						rank = "SERGEANT";
						side = 1;
						position[] = {0,-10,0};
					};					
					class Unit06 {
						vehicle = "B_Soldier_A_F";
						rank = "CORPORAL";
						side = 1;
						position[] = {-5,-5,0};
					};					
					class Unit07 {
						vehicle = "B_support_GMG_F";
						rank = "CORPORAL";
						side = 1;
						position[] = {-5,-10,0};
					};					
					class Unit08 {
						vehicle = "B_support_AMG_F";
						rank = "CORPORAL";
						side = 1;
						position[] = {-10,-10,0};
					};
				};
								
				class INF_CMBT12_01 {
					name = "Combat Traditionnel (12)";					
					class Unit01 {
						vehicle = "B_Soldier_SL_F";
						rank = "SERGEANT";
						side = 1;
						position[] = {0,0,0};
					};					
					class Unit02 {
						vehicle = "B_Soldier_F";
						rank = "CORPORAL";
						side = 1;
						position[] = {5,0,0};
					};					
					class Unit03 {
						vehicle = "B_soldier_AR_F";
						rank = "CORPORAL";
						side = 1;
						position[] = {-5,-5,0};
					};					
					class Unit04 {
						vehicle = "B_Soldier_GL_F";
						rank = "CORPORAL";
						side = 1;
						position[] = {0,-5,0};
					};					
					class Unit05 {
						vehicle = "B_Soldier_TL_F";
						rank = "SERGEANT";
						side = 1;
						position[] = {5,-5,0};
					};					
					class Unit06 {
						vehicle = "B_soldier_AT_F";
						rank = "CORPORAL";
						side = 1;
						position[] = {10,-5,0};
					};					
					class Unit07 {
						vehicle = "B_soldier_AR_F";
						rank = "CORPORAL";
						side = 1;
						position[] = {-10,-10,0};
					};					
					class Unit08 {
						vehicle = "B_Soldier_GL_F";
						rank = "CORPORAL";
						side = 1;
						position[] = {-5,-10,0};
					};					
					class Unit09 {
						vehicle = "B_Soldier_SL_F";
						rank = "SERGEANT";
						side = 1;
						position[] = {0,-10,0};
					};					
					class Unit10 {
						vehicle = "B_soldier_M_F";
						rank = "CORPORAL";
						side = 1;
						position[] = {5,-10,0};
					};					
					class Unit11 {
						vehicle = "B_soldier_AR_F";
						rank = "CORPORAL";
						side = 1;
						position[] = {10,-10,0};
					};					
					class Unit12 {
						vehicle = "B_Soldier_F";
						rank = "CORPORAL";
						side = 1;
						position[] = {15,-10,0};
					};
				};				
			};
			
			class Armored {
				name = "Groupes Mecanises";
				class ARM_EQPG2_01 {
					name = "Equipage seul (2)";					
					class Unit01 {
						vehicle = "B_diver_TL_F";
						rank = "SERGEANT";
						side = 1;
						position[] = {0,0,0};
					};					
					class Unit02 {
						vehicle = "B_crew_F";
						rank = "CORPORAL";
						side = 1;
						position[] = {0,-5,0};
					};
				};
				
				class ARM_EQPG3_01 {
					name = "Equipage seul (3)";
					class Unit01 {
						vehicle = "B_diver_TL_F";
						rank = "SERGEANT";
						side = 1;
						position[] = {0,0,0};
					};					
					class Unit02 {
						vehicle = "B_crew_F";
						rank = "CORPORAL";
						side = 1;
						position[] = {5,-5,0};
					};					
					class Unit03 {
						vehicle = "B_crew_F";
						rank = "CORPORAL";
						side = 1;
						position[] = {5,-10,0};
					};
				};
				class ARM_APC2_01 {
					name = "APC + Equipage (2)";					
					class Unit01 {
						vehicle = "rhsusf_m113_usarmy";
						rank = "CORPORAL";
						side = 1;
						position[] = {0,0,0};
					};
					class Unit02 {
						vehicle = "B_diver_TL_F";
						rank = "SERGEANT";
						side = 1;
						position[] = {10,0,0};
					};					
					class Unit03 {
						vehicle = "B_crew_F";
						rank = "CORPORAL";
						side = 1;
						position[] = {10,-5,0};
					};
				};
				class ARM_IVF2_01 {
					name = "IFV + Equipage (2)";					
					class Unit01 {
						vehicle = "RHS_M2A2";
						rank = "CORPORAL";
						side = 1;
						position[] = {0,0,0};
					};
					class Unit02 {
						vehicle = "B_diver_TL_F";
						rank = "SERGEANT";
						side = 1;
						position[] = {10,0,0};
					};					
					class Unit03 {
						vehicle = "B_crew_F";
						rank = "CORPORAL";
						side = 1;
						position[] = {10,-5,0};
					};
				};
				class ARM_IVF3_01 {
					name = "IFV + Equipage (3)";					
					class Unit01 {
						vehicle = "RHS_M2A2";
						rank = "CORPORAL";
						side = 1;
						position[] = {0,0,0};
					};
					class Unit02 {
						vehicle = "B_diver_TL_F";
						rank = "SERGEANT";
						side = 1;
						position[] = {10,0,0};
					};					
					class Unit03 {
						vehicle = "B_crew_F";
						rank = "CORPORAL";
						side = 1;
						position[] = {10,-5,0};
					};
					class Unit04 {
						vehicle = "B_crew_F";
						rank = "CORPORAL";
						side = 1;
						position[] = {10,-10,0};
					};
				};
				class ARM_APC10_01 {
					name = "APC + Equipage + Infanterie (2+8)";
					class Vehicle01 {
						vehicle = "rhsusf_m113_usarmy";
						rank = "CORPORAL";
						side = 1;
						position[] = {-10,10,0};
					};
					class Crew01 {
						vehicle = "B_diver_TL_F";
						rank = "CORPORAL";
						side = 1;
						position[] = {-15,10,0};
					};					
					class Crew02 {
						vehicle = "B_crew_F";
						rank = "CORPORAL";
						side = 1;
						position[] = {-15,5,0};
					};
					class Unit01 {
						vehicle = "B_Soldier_SL_F";
						rank = "SERGEANT";
						side = 1;
						position[] = {0,0,0};
					};					
					class Unit02 {
						vehicle = "B_Soldier_GL_F";
						rank = "CORPORAL";
						side = 1;
						position[] = {5,-5,0};
					};					
					class Unit03 {
						vehicle = "B_soldier_AR_F";
						rank = "CORPORAL";
						side = 1;
						position[] = {5,-10,0};
					};					
					class Unit04 {
						vehicle = "B_soldier_AT_F";
						rank = "CORPORAL";
						side = 1;
						position[] = {10,-10,0};
					};					
					class Unit05 {
						vehicle = "B_Soldier_TL_F";
						rank = "CORPORAL";
						side = 1;
						position[] = {0,-10,0};
					};					
					class Unit06 {
						vehicle = "B_soldier_M_F";
						rank = "CORPORAL";
						side = 1;
						position[] = {-5,-5,0};
					};					
					class Unit07 {
						vehicle = "B_medic_F";
						rank = "CORPORAL";
						side = 1;
						position[] = {-5,-10,0};
					};					
					class Unit08 {
						vehicle = "B_Soldier_F";
						rank = "CORPORAL";
						side = 1;
						position[] = {-10,-10,0};
					};
				};
				
				class ARM_IVF9_01 {
					name = "IFV + Equipage + Infanterie (2+6)";
					class Vehicle01 {
						vehicle = "RHS_M2A2";
						rank = "CORPORAL";
						side = 1;
						position[] = {-10,10,0};
					};
					class Crew01 {
						vehicle = "B_diver_TL_F";
						rank = "CORPORAL";
						side = 1;
						position[] = {-15,10,0};
					};
					class Crew02 {
						vehicle = "B_crew_F";
						rank = "CORPORAL";
						side = 1;
						position[] = {-15,5,0};
					};			
					class Unit01 {
						vehicle = "B_Soldier_SL_F";
						rank = "SERGEANT";
						side = 1;
						position[] = {0,0,0};
					};
					class Unit02 {
						vehicle = "B_Soldier_GL_F";
						rank = "CORPORAL";
						side = 1;
						position[] = {5,-5,0};
					};
					class Unit03 {
						vehicle = "B_soldier_AR_F";
						rank = "CORPORAL";
						side = 1;
						position[] = {5,-10,0};
					};
					class Unit04 {
						vehicle = "B_Soldier_TL_F";
						rank = "SERGEANT";
						side = 1;
						position[] = {-5,-5,0};
					};					
					class Unit05 {
						vehicle = "B_soldier_AR_F";
						rank = "CORPORAL";
						side = 1;
						position[] = {-5,-10,0};
					};					
					class Unit06 {
						vehicle = "B_soldier_F";
						rank = "CORPORAL";
						side = 1;
						position[] = {0,-10,0};
					};
				};
				class ARM_IVF9_01 {
					name = "IFV + Equipage + Infanterie (2+6)";
					class Vehicle01 {
						vehicle = "RHS_M2A2";
						rank = "CORPORAL";
						side = 1;
						position[] = {-10,10,0};
					};
					class Crew01 {
						vehicle = "B_diver_TL_F";
						rank = "CORPORAL";
						side = 1;
						position[] = {-15,10,0};
					};
					class Crew02 {
						vehicle = "B_crew_F";
						rank = "CORPORAL";
						side = 1;
						position[] = {-15,5,0};
					};
					class Crew03 {
						vehicle = "B_crew_F";
						rank = "CORPORAL";
						side = 1;
						position[] = {-15,0,0};
					};			
					class Unit01 {
						vehicle = "B_Soldier_SL_F";
						rank = "SERGEANT";
						side = 1;
						position[] = {0,0,0};
					};
					class Unit02 {
						vehicle = "B_Soldier_GL_F";
						rank = "CORPORAL";
						side = 1;
						position[] = {5,-5,0};
					};
					class Unit03 {
						vehicle = "B_soldier_AR_F";
						rank = "CORPORAL";
						side = 1;
						position[] = {5,-10,0};
					};
					class Unit04 {
						vehicle = "B_Soldier_TL_F";
						rank = "SERGEANT";
						side = 1;
						position[] = {-5,-5,0};
					};					
					class Unit05 {
						vehicle = "B_soldier_AR_F";
						rank = "CORPORAL";
						side = 1;
						position[] = {-5,-10,0};
					};					
					class Unit06 {
						vehicle = "B_soldier_F";
						rank = "CORPORAL";
						side = 1;
						position[] = {0,-10,0};
					};
				};				
				class ARM_MBT2_01 {
					name = "MBT + Equipage (2)";					
					class Unit01 {
						vehicle = "rhsusf_m1a1aimwd_usarmy";
						rank = "CORPORAL";
						side = 1;
						position[] = {0,0,0};
					};
					class Unit02 {
						vehicle = "B_diver_TL_F";
						rank = "SERGEANT";
						side = 1;
						position[] = {10,0,0};
					};					
					class Unit03 {
						vehicle = "B_crew_F";
						rank = "CORPORAL";
						side = 1;
						position[] = {10,-5,0};
					};
				};
				
				class ARM_MBT3_01 {
					name = "MBT + Equipage (3)";					
					class Unit01 {
						vehicle = "rhsusf_m1a1aimwd_usarmy";
						rank = "CORPORAL";
						side = 1;
						position[] = {0,0,0};
					};
					class Unit02 {
						vehicle = "B_diver_TL_F";
						rank = "SERGEANT";
						side = 1;
						position[] = {10,0,0};
					};					
					class Unit03 {
						vehicle = "B_crew_F";
						rank = "CORPORAL";
						side = 1;
						position[] = {10,-5,0};
					};
					class Unit04 {
						vehicle = "B_crew_F";
						rank = "CORPORAL";
						side = 1;
						position[] = {10,-10,0};
					};
				};				
			};


			class Air {
				name = "Forces Aeriennes";
				
				class AIR_HELIC2_01 {
					name = "Equipage seul (2)";
					
					class Unit01 {
						vehicle = "B_Helipilot_F";
						rank = "SERGEANT";
						side = 1;
						position[] = {0,0,0};
					};					
					class Unit02 {
						vehicle = "B_Helipilot_F";
						rank = "CORPORAL";
						side = 1;
						position[] = {0,5,0};
					};
				};
				
				class AIR_HELIC3_01 {
					name = "Helico + Equipage (2)";
					
					class Unit01 {
						vehicle = "RHS_UH60M_d";
						rank = "CORPORAL";
						side = 1;
						position[] = {0,0,0};
					};					
					class Unit02 {
						vehicle = "B_Helipilot_F";
						rank = "SERGEANT";
						side = 1;
						position[] = {20,-5,0};
					};					
					class Unit03 {
						vehicle = "B_Helipilot_F";
						rank = "CORPORAL";
						side = 1;
						position[] = {20,-10,0};
					};
				};
				
				class AIR_HELIC4_01 {
					name = "Equipage seul (4)";
					
					class Unit01 {
						vehicle = "B_Helipilot_F";
						rank = "SERGEANT";
						side = 1;
						position[] = {0,0,0};
					};					
					class Unit02 {
						vehicle = "B_Helipilot_F";
						rank = "CORPORAL";
						side = 1;
						position[] = {5,0,0};
					};					
					class Unit03 {
						vehicle = "B_helicrew_F";
						rank = "CORPORAL";
						side = 1;
						position[] = {0,-5,0};
					};					
					class Unit04 {
						vehicle = "B_helicrew_F";
						rank = "CORPORAL";
						side = 1;
						position[] = {5,-5,0};
					};
				};
				
				class AIR_HELIC5_01 {
					name = "Helico + Equipage (4)";
					
					class Vechicule01 {
						vehicle = "RHS_CH_47F_10";
						rank = "CORPORAL";
						side = 1;
						position[] = {0,0,0};
					};
					class Unit01 {
						vehicle = "B_Helipilot_F";
						rank = "SERGEANT";
						side = 1;
						position[] = {20,-5,0};
					};					
					class Unit02 {
						vehicle = "B_Helipilot_F";
						rank = "CORPORAL";
						side = 1;
						position[] = {20,-10,0};
					};					
					class Unit03 {
						vehicle = "B_helicrew_F";
						rank = "CORPORAL";
						side = 1;
						position[] = {20,-15,0};
					};					
					class Unit04 {
						vehicle = "B_helicrew_F";
						rank = "CORPORAL";
						side = 1;
						position[] = {20,-20,0};
					};
				};
			};

			class Motorized {
				name = "Groupes Motorises"
				class MOT_CMDT2_01 {
					name = "Commandement (2)";
					class Vechicule01 {
						vehicle = "rhsusf_m1025_w";
						rank = "CORPORAL";
						side = 1;
						position[] = {-10,10,0};
					};
					class Unit01 {
						vehicle = "B_officer_F";
						rank = "SERGEANT";
						side = 1;
						position[] = {0,0,0};
					};					
					class Unit02 {
						vehicle = "B_officer_F";
						rank = "CORPORAL";
						side = 1;
						position[] = {5,0,0};
					};					
				};
				class MOT_CMDT4_01 {
					name = "Commandement + Escorte (4)";
					class Vechicule01 {
						vehicle = "rhsusf_m1025_w";
						rank = "CORPORAL";
						side = 1;
						position[] = {-10,10,0};
					};
					class Unit01 {
						vehicle = "B_officer_F";
						rank = "SERGEANT";
						side = 1;
						position[] = {0,0,0};
					};					
					class Unit02 {
						vehicle = "B_support_AMG_F";
						rank = "CORPORAL";
						side = 1;
						position[] = {5,-5,0};
					};					
					class Unit03 {
						vehicle = "B_support_GMG_F";
						rank = "CORPORAL";
						side = 1;
						position[]={-5,-5,0};
					};					
					class Unit04 {
						vehicle="B_recon_F";
						rank="CORPORAL";
						side=1;						
						position[]={0,-5,0};
					};
				};
				class MOT_SNPR3_01 {
					name = "Sniper (3)";
					class Vechicule01 {
						vehicle = "rhsusf_m1025_w";
						rank = "CORPORAL";
						side = 1;
						position[] = {-10,10,0};
					};
					class Unit01 {
						vehicle = "B_Soldier_SL_F";
						rank = "SERGEANT";
						side = 1;
						position[] = {0,0,0};
					};
					class Unit02 {
						vehicle = "B_spotter_F";
						rank = "CORPORAL";
						side = 1;
						position[] = {5,-5,0};
					};					
					class Unit03 {
						vehicle = "B_sniper_F";
						rank = "CORPORAL";
						side = 1;
						position[] = {-5,-5,0};
					};
				};
				
				class MOT_RECO_01 {
					name = "Reconnaissance (3)";					
					class Vechicule01 {
						vehicle = "rhsusf_m1025_w";
						rank = "CORPORAL";
						side = 1;
						position[] = {-10,10,0};
					};
					class Unit01 {
						vehicle = "B_Soldier_SL_F";
						rank = "SERGEANT";
						side = 1;
						position[] = {0,0,0};
					};					
					class Unit02 {
						vehicle = "B_recon_F";
						rank = "CORPORAL";
						side = 1;
						position[] = {5,-5,0};
					};					
					class Unit03 {
						vehicle = "B_recon_F";
						rank = "CORPORAL";
						side = 1;
						position[] = {-5,-5,0};
					};
				};
				
				class MOT_DEMO4_01 {
					name = "Demolition (4)";
					class Vechicule01 {
						vehicle = "rhsusf_m1025_w";
						rank = "CORPORAL";
						side = 1;
						position[] = {-10,10,0};
					};					
					class Unit01 {
						vehicle = "B_Soldier_SL_F";
						rank = "SERGEANT";
						side = 1;
						position[] = {0,0,0};
					};					
					class Unit02 {
						vehicle = "B_soldier_exp_F";
						rank = "CORPORAL";
						side = 1;
						position[] = {5,-5,0};
					};					
					class Unit03 {
						vehicle = "B_soldier_exp_F";
						rank = "CORPORAL";
						side = 1;
						position[] = {-5,-5,0};
					};
					class Unit04 {
						vehicle = "B_Soldier_F";
						rank = "CORPORAL";
						side = 1;
						position[] = {0,-5,0};
					};
				};
					
				class MOT_FSPE4_01 {
					name = "Forces Speciales (4)";
					class Vechicule01 {
						vehicle = "rhsusf_m1025_w";
						rank = "CORPORAL";
						side = 1;
						position[] = {-10,10,0};
					};				
					class Unit01 {
						vehicle = "B_Soldier_SL_F";
						rank = "SERGEANT";
						side = 1;
						position[] = {0,0,0};
					};					
					class Unit02 {
						vehicle = "B_soldier_AR_F";
						rank = "CORPORAL";
						side = 1;
						position[] = {-5,-5,0};
					};					
					class Unit03 {
						vehicle = "B_soldier_LAT_F";
						rank = "CORPORAL";
						side = 1;
						position[] = {5,-5,0};
					};
					class Unit04 {
						vehicle = "B_recon_F";
						rank = "CORPORAL";
						side = 1;
						position[] = {0,-5,0};
					};
				};
				
				class MOT_SUPP4_01 {
					name = "Support (4)";
					class Vechicule01 {
						vehicle = "rhsusf_m1025_w";
						rank = "CORPORAL";
						side = 1;
						position[] = {-10,10,0};
					};					
					class Unit01 {
						vehicle = "B_Soldier_SL_F";
						rank = "SERGEANT";
						side = 1;
						position[] = {0,0,0};
					};					
					class Unit02 {
						vehicle = "B_Soldier_GL_F";
						rank = "CORPORAL";
						side = 1;
						position[] = {5,-5,0};
					};					
					class Unit03 {
						vehicle = "B_support_GMG_F";
						rank = "CORPORAL";
						side = 1;
						position[] = {-5,-5,0};
					};
					class Unit04 {
						vehicle = "B_soldier_LAT_F";
						rank = "CORPORAL";
						side = 1;
						position[] = {0,-5,0};
					};
				};
						
				class MOT_CMBT6_01 {
					name = "Combat (6)";
					class Vechicule01 {
						vehicle = "rhsusf_rg33_wd";
						rank = "CORPORAL";
						side = 1;
						position[] = {-10,10,0};
					};					
					class Unit01 {
						vehicle = "B_Soldier_SL_F";
						rank = "SERGEANT";
						side = 1;
						position[] = {0,0,0};
					};
					class Unit02 {
						vehicle = "B_Soldier_GL_F";
						rank = "CORPORAL";
						side = 1;
						position[] = {5,-5,0};
					};
					class Unit03 {
						vehicle = "B_soldier_AR_F";
						rank = "CORPORAL";
						side = 1;
						position[] = {5,-10,0};
					};
					class Unit04 {
						vehicle = "B_Soldier_TL_F";
						rank = "SERGEANT";
						side = 1;
						position[] = {-5,-5,0};
					};					
					class Unit05 {
						vehicle = "B_soldier_AR_F";
						rank = "CORPORAL";
						side = 1;
						position[] = {-5,-10,0};
					};					
					class Unit06 {
						vehicle = "B_soldier_F";
						rank = "CORPORAL";
						side = 1;
						position[] = {0,-10,0};
					};
				};
				
				class MOT_CMBT8_01 {
					name = "Combat Traditionnel (8)";
					class Vechicule01 {
						vehicle = "rhsusf_rg33_wd";
						rank = "CORPORAL";
						side = 1;
						position[] = {-10,10,0};
					};						
					class Unit01 {
						vehicle = "B_Soldier_SL_F";
						rank = "SERGEANT";
						side = 1;
						position[] = {0,0,0};
					};					
					class Unit02 {
						vehicle = "B_Soldier_GL_F";
						rank = "CORPORAL";
						side = 1;
						position[] = {5,-5,0};
					};					
					class Unit03 {
						vehicle = "B_soldier_AR_F";
						rank = "CORPORAL";
						side = 1;
						position[] = {5,-10,0};
					};					
					class Unit04 {
						vehicle = "B_soldier_AT_F";
						rank = "CORPORAL";
						side = 1;
						position[] = {10,-10,0};
					};					
					class Unit05 {
						vehicle = "B_Soldier_TL_F";
						rank = "CORPORAL";
						side = 1;
						position[] = {0,-10,0};
					};					
					class Unit06 {
						vehicle = "B_soldier_M_F";
						rank = "CORPORAL";
						side = 1;
						position[] = {-5,-5,0};
					};					
					class Unit07 {
						vehicle = "B_medic_F";
						rank = "CORPORAL";
						side = 1;
						position[] = {-5,-10,0};
					};					
					class Unit08 {
						vehicle = "B_Soldier_F";
						rank = "CORPORAL";
						side = 1;
						position[] = {-10,-10,0};
					};
				};
				
				class MOT_CMBT8_02 {
					name = "Combat Polyvalent (8)";
					class Vechicule01 {
						vehicle = "rhsusf_rg33_wd";
						rank = "CORPORAL";
						side = 1;
						position[] = {-10,10,0};
					};
					class Unit01 {
						vehicle = "B_Soldier_SL_F";
						rank = "SERGEANT";
						side = 1;
						position[] = {0,0,0};
					};					
					class Unit02 {
						vehicle = "B_Soldier_TL_F";
						rank = "CORPORAL";
						side = 1;
						position[] = {5,-5,0};
					};					
					class Unit03 {
						vehicle = "B_medic_F";
						rank = "CORPORAL";
						side = 1;
						position[] = {5,-10,0};
					};					
					class Unit04 {
						vehicle = "B_soldier_AT_F";
						rank = "CORPORAL";
						side = 1;
						position[] = {10,-10,0};
					};					
					class Unit05 {
						vehicle = "B_Soldier_GL_F";
						rank = "SERGEANT";
						side = 1;
						position[] = {0,-10,0};
					};					
					class Unit06 {
						vehicle = "B_Soldier_A_F";
						rank = "CORPORAL";
						side = 1;
						position[] = {-5,-5,0};
					};					
					class Unit07 {
						vehicle = "B_support_GMG_F";
						rank = "CORPORAL";
						side = 1;
						position[] = {-5,-10,0};
					};					
					class Unit08 {
						vehicle = "B_support_AMG_F";
						rank = "CORPORAL";
						side = 1;
						position[] = {-10,-10,0};
					};
				};
								
				class MOT_CMBT12_01 {
					name = "Combat Traditionnel (12)";
					class Vechicule01 {
						vehicle = "rhsusf_M1078A1P2_wd_fmtv_usarmy";
						rank = "CORPORAL";
						side = 1;
						position[] = {-10,10,0};
					};				
					class Unit01 {
						vehicle = "B_Soldier_SL_F";
						rank = "SERGEANT";
						side = 1;
						position[] = {0,0,0};
					};					
					class Unit02 {
						vehicle = "B_Soldier_F";
						rank = "CORPORAL";
						side = 1;
						position[] = {5,0,0};
					};					
					class Unit03 {
						vehicle = "B_soldier_AR_F";
						rank = "CORPORAL";
						side = 1;
						position[] = {-5,-5,0};
					};					
					class Unit04 {
						vehicle = "B_Soldier_GL_F";
						rank = "CORPORAL";
						side = 1;
						position[] = {0,-5,0};
					};					
					class Unit05 {
						vehicle = "B_Soldier_TL_F";
						rank = "SERGEANT";
						side = 1;
						position[] = {5,-5,0};
					};					
					class Unit06 {
						vehicle = "B_soldier_AT_F";
						rank = "CORPORAL";
						side = 1;
						position[] = {10,-5,0};
					};					
					class Unit07 {
						vehicle = "B_soldier_AR_F";
						rank = "CORPORAL";
						side = 1;
						position[] = {-10,-10,0};
					};					
					class Unit08 {
						vehicle = "B_Soldier_GL_F";
						rank = "CORPORAL";
						side = 1;
						position[] = {-5,-10,0};
					};					
					class Unit09 {
						vehicle = "B_Soldier_SL_F";
						rank = "SERGEANT";
						side = 1;
						position[] = {0,-10,0};
					};					
					class Unit10 {
						vehicle = "B_soldier_M_F";
						rank = "CORPORAL";
						side = 1;
						position[] = {5,-10,0};
					};					
					class Unit11 {
						vehicle = "B_soldier_AR_F";
						rank = "CORPORAL";
						side = 1;
						position[] = {10,-10,0};
					};					
					class Unit12 {
						vehicle = "B_Soldier_F";
						rank = "CORPORAL";
						side = 1;
						position[] = {15,-10,0};
					};
				};				
			};
			
		};
	};
	
	class East {
		class OFCRA {
			name="OFCRA";
			
			class Infantry {
				name = "Groupes d'Infanterie";
				class INF_CMDT2_01 {
					name = "Commandement (2)";
					class Unit01 {
						vehicle = "O_officer_F";
						rank = "SERGEANT";
						side = 0;
						position[] = {0,0,0};
					};					
					class Unit02 {
						vehicle = "O_officer_F";
						rank = "CORPORAL";
						side = 0;
						position[] = {5,0,0};
					};					
				};
				class INF_CMDT4_01 {
					name = "Commandement + Escorte (4)";
					class Unit01 {
						vehicle = "O_officer_F";
						rank = "SERGEANT";
						side = 0;
						position[] = {0,0,0};
					};					
					class Unit02 {
						vehicle = "O_soldier_M_F";
						rank = "CORPORAL";
						side = 0;
						position[] = {5,-5,0};
					};					
					class Unit03 {
						vehicle = "O_recon_F";
						rank = "CORPORAL";
						side = 0;
						position[]={-5,-5,0};
					};					
					class Unit04 {
						vehicle="O_recon_F";
						rank="CORPORAL";
						side=0;						
						position[]={0,-5,0};
					};
				};
				class INF_MKSM4_01 {
					name = "Marksman (4)";
					class Unit01 {
						vehicle = "O_Soldier_SL_F";
						rank = "SERGEANT";
						side = 0;
						position[] = {0,0,0};
					};					
					class Unit02 {
						vehicle = "O_soldier_M_F";
						rank = "CORPORAL";
						side = 0;
						position[] = {0,-5,0};
					};					
					class Unit03 {
						vehicle = "O_soldier_M_F";
						rank = "CORPORAL";
						side = 0;
						position[]={5,-5,0};
					};					
					class Unit04 {
						vehicle="O_recon_F";
						rank="PRIVATE";
						side = 0;						
						position[]={-5,-5,0};
					};
				};
				class INF_SUPP4_01 {
					name = "Support (4)";
					class Unit01 {
						vehicle = "O_officer_F";
						rank = "SERGEANT";
						side = 0;
						position[] = {0,0,0};
					};					
					class Unit02 {
						vehicle = "O_Soldier_AT_F";
						rank = "CORPORAL";
						side = 0;
						position[] = {0,-5,0};
					};					
					class Unit03 {
						vehicle = "O_Soldier_AR_F";
						rank = "CORPORAL";
						side = 0;
						position[]={5,-5,0};
					};					
					class Unit04 {
						vehicle="O_Soldier_F";
						rank="PRIVATE";
						side = 0;						
						position[]={-5,-5,0};
					};
				};	
				class INF_FSPE4_01 {
					name = "Forces Speciales (4)";					
					class Unit01 {
						vehicle = "O_Soldier_SL_F";
						rank = "SERGEANT";
						side = 0;
						position[] = {0,0,0};
					};					
					class Unit02 {
						vehicle = "O_Soldier_AR_F";
						rank = "CORPORAL";
						side = 0;
						position[] = {-5,-5,0};
					};					
					class Unit03 {
						vehicle = "O_Soldier_LAT_F";
						rank = "CORPORAL";
						side = 0;
						position[] = {0,-5,0};
					};
					class Unit04 {
						vehicle = "O_soldier_M_F";
						rank = "CORPORAL";
						side = 0;
						position[] = {5,-5,0};
					};
				};
				class INF_CMBT5_01 {
					name = "Combat Traditionnel (5)";
					class Unit01 {
						vehicle = "O_Soldier_SL_F";
						rank = "SERGEANT";
						side = 0;
						position[] = {0,0,0};
					};					
					class Unit02 {
						vehicle = "O_Soldier_TL_F";
						rank = "CORPORAL";
						side = 0;
						position[] = {-5,-5,0};
					};					
					class Unit03 {
						vehicle = "O_medic_F";
						rank = "CORPORAL";
						side = 0;
						position[] = {-5,-10,0};
					};					
					class Unit04 {
						vehicle = "O_Soldier_AT_F";
						rank = "CORPORAL";
						side = 0;
						position[] = {5,-5,0};
					};												
					class Unit05 {
						vehicle = "O_support_GMG_F";
						rank = "CORPORAL";
						side = 0;
						position[] = {5,-10,0};
					};					
				};				
				class INF_CMBT7_01 {
					name = "Combat Traditionnel (7)";
					class Unit01 {
						vehicle = "O_Soldier_SL_F";
						rank = "SERGEANT";
						side = 0;
						position[] = {0,0,0};
					};					
					class Unit02 {
						vehicle = "O_Soldier_TL_F";
						rank = "CORPORAL";
						side = 0;
						position[] = {-5,-5,0};
					};					
					class Unit03 {
						vehicle = "O_medic_F";
						rank = "CORPORAL";
						side = 0;
						position[] = {0,-5,0};
					};					
					class Unit04 {
						vehicle = "O_Soldier_AT_F";
						rank = "CORPORAL";
						side = 0;
						position[] = {5,-5,0};
					};					
					class Unit05 {
						vehicle = "O_Soldier_GL_F";
						rank = "CORPORAL";
						side = 0;
						position[] = {-5,-10,0};
					};					
					class Unit06 {
						vehicle = "O_Soldier_A_F";
						rank = "CORPORAL";
						side = 0;
						position[] = {0,-10,0};
					};					
					class Unit07 {
						vehicle = "O_support_GMG_F";
						rank = "CORPORAL";
						side = 0;
						position[] = {5,-10,0};
					};
				};	
			};
			
			class Armored {
				name = "Groupes Mecanises";				
				class ARM_EQPG2_01 {
					name = "Equipage seul (2)";
					class Unit01 {
						vehicle = "O_diver_TL_F";
						rank = "SERGEANT";
						side = 0;
						position[] = {0,0,0};
					};					
					class Unit02 {
						vehicle = "O_crew_F";
						rank = "CORPORAL";
						side = 0;
						position[] = {0,-5,0};
					};
				};				
				class ARM_EQPG3_01 {
					name = "Equipage seul (3)";
					class Unit01 {
						vehicle = "O_diver_TL_F";
						rank = "SERGEANT";
						side = 0;
						position[] = {0,0,0};
					};					
					class Unit02 {
						vehicle = "O_crew_F";
						rank = "CORPORAL";
						side = 0;
						position[] = {0,-5,0};
					};					
					class Unit03 {
						vehicle = "O_crew_F";
						rank = "CORPORAL";
						side = 0;
						position[] = {0,-10,0};
					};
				};
				class ARM_IVF2_01 {
					name = "IFV + Equipage (2)";					
					class Unit01 {
						vehicle = "rhs_bmp2_msv";
						rank = "CORPORAL";
						side = 0;
						position[] = {0,0,0};
					};
					class Unit02 {
						vehicle = "O_diver_TL_F";
						rank = "SERGEANT";
						side = 0;
						position[] = {10,0,0};
					};					
					class Unit03 {
						vehicle = "O_crew_F";
						rank = "CORPORAL";
						side = 0;
						position[] = {10,-5,0};
					};
				};
				class ARM_IVF3_01 {
					name = "IFV + Equipage (3)";					
					class Unit01 {
						vehicle = "rhs_bmp2_msv";
						rank = "CORPORAL";
						side = 0;
						position[] = {0,0,0};
					};
					class Unit02 {
						vehicle = "O_diver_TL_F";
						rank = "SERGEANT";
						side = 0;
						position[] = {10,0,0};
					};					
					class Unit03 {
						vehicle = "O_crew_F";
						rank = "CORPORAL";
						side = 0;
						position[] = {10,-5,0};
					};
					class Unit04 {
						vehicle = "O_crew_F";
						rank = "CORPORAL";
						side = 0;
						position[] = {10,-10,0};
					};
				};
				class ARM_IVF9_01 {
					name = "IFV + Equipage + Infanterie (2+7)";					
					class Vehicle01 {
						vehicle = "rhs_bmp2_msv";
						rank = "CORPORAL";
						side = 0;
						position[] = {-10,10,0};
					};
					class Crew02 {
						vehicle = "O_diver_TL_F";
						rank = "CORPORAL";
						side = 0;
						position[] = {-15,10,0};
					};					
					class Crew03 {
						vehicle = "O_crew_F";
						rank = "CORPORAL";
						side = 0;
						position[] = {-15,5,0};
					};
					class Unit01 {
						vehicle = "O_Soldier_SL_F";
						rank = "SERGEANT";
						side = 0;
						position[] = {0,0,0};
					};					
					class Unit02 {
						vehicle = "O_Soldier_TL_F";
						rank = "CORPORAL";
						side = 0;
						position[] = {-5,-5,0};
					};					
					class Unit03 {
						vehicle = "O_medic_F";
						rank = "CORPORAL";
						side = 0;
						position[] = {0,-5,0};
					};					
					class Unit04 {
						vehicle = "O_Soldier_AT_F";
						rank = "CORPORAL";
						side = 0;
						position[] = {5,-5,0};
					};					
					class Unit05 {
						vehicle = "O_Soldier_GL_F";
						rank = "CORPORAL";
						side = 0;
						position[] = {-5,-10,0};
					};					
					class Unit06 {
						vehicle = "O_Soldier_A_F";
						rank = "CORPORAL";
						side = 0;
						position[] = {0,-10,0};
					};					
					class Unit07 {
						vehicle = "O_support_GMG_F";
						rank = "CORPORAL";
						side = 0;
						position[] = {5,-10,0};
					};
				};			
				class ARM_MBT2_01 {
					name = "MBT + Equipage (2)";					
					class Unit01 {
						vehicle = "rhs_t80u";
						rank = "CORPORAL";
						side = 0;
						position[] = {0,0,0};
					};
					class Unit02 {
						vehicle = "O_diver_TL_F";
						rank = "SERGEANT";
						side = 0;
						position[] = {10,0,0};
					};					
					class Unit03 {
						vehicle = "O_crew_F";
						rank = "CORPORAL";
						side = 0;
						position[] = {10,-5,0};
					};
				};				
				class ARM_MBT3_01 {
					name = "MBT + Equipage (3)";					
					class Unit01 {
						vehicle = "rhs_t80u";
						rank = "CORPORAL";
						side = 0;
						position[] = {0,0,0};
					};
					class Unit02 {
						vehicle = "O_diver_TL_F";
						rank = "SERGEANT";
						side = 0;
						position[] = {10,0,0};
					};					
					class Unit03 {
						vehicle = "O_crew_F";
						rank = "CORPORAL";
						side = 0;
						position[] = {10,-5,0};
					};
					class Unit04 {
						vehicle = "O_crew_F";
						rank = "CORPORAL";
						side = 0;
						position[] = {10,-10,0};
					};
				};
			};
													
			class Air {
				name = "Forces Aeriennes";
				class AIR_HELIC2_01 {
					name = "Equipage seul (2)";					
					class Unit01 {
						vehicle = "O_Helipilot_F";
						rank = "SERGEANT";
						side = 0;
						position[] = {0,0,0};
					};					
					class Unit03 {
						vehicle = "O_Helipilot_F";
						rank = "CORPORAL";
						side = 0;
						position[] = {0,5,0};
					};
				};
				class AIR_HELIC3_01 {
					name = "Helico + Equipage (2)";					
					class Unit01 {
						vehicle = "RHS_Mi24Vt_vvs";
						rank = "CORPORAL";
						side = 0;
						position[] = {0,0,0};
					};					
					class Unit02 {
						vehicle = "O_Helipilot_F";
						rank = "SERGEANT";
						side = 0;
						position[] = {20,-5,0};
					};					
					class Unit03 {
						vehicle = "O_Helipilot_F";
						rank = "CORPORAL";
						side = 0;
						position[] = {20,-10,0};
					};
				};				
				class AIR_HELIC4_01 {
					name = "Equipage seul (4)";
					
					class Unit01 {
						vehicle = "O_Helipilot_F";
						rank = "SERGEANT";
						side = 0;
						position[] = {0,0,0};
					};					
					class Unit02 {
						vehicle = "O_Helipilot_F";
						rank = "CORPORAL";
						side = 0;
						position[] = {5,0,0};
					};					
					class Unit03 {
						vehicle = "O_helicrew_F";
						rank = "CORPORAL";
						side = 0;
						position[] = {0,-5,0};
					};					
					class Unit04 {
						vehicle = "O_helicrew_F";
						rank = "CORPORAL";
						side = 0;
						position[] = {5,-5,0};
					};
				};
				class AIR_HELIC5_01 {
					name = "Helico + Equipage (4)";					
					class Vechicule01 {
						vehicle = "RHS_Mi8mt_vvs";
						rank = "CORPORAL";
						side = 0;
						position[] = {0,0,0};
					};
					class Unit01 {
						vehicle = "O_Helipilot_F";
						rank = "SERGEANT";
						side = 0;
						position[] = {20,-5,0};
					};					
					class Unit02 {
						vehicle = "O_Helipilot_F";
						rank = "CORPORAL";
						side = 0;
						position[] = {20,-10,0};
					};					
					class Unit03 {
						vehicle = "O_helicrew_F";
						rank = "CORPORAL";
						side = 0;
						position[] = {20,-15,0};
					};					
					class Unit04 {
						vehicle = "O_helicrew_F";
						rank = "CORPORAL";
						side = 0;
						position[] = {20,-20,0};
					};
				};
			};
			
			class Motorized {
				name = "Groupes Motorises";
				class INF_CMDT2_01 {
					class Vechicule01 {
						vehicle = "RHS_UAZ_MSV_01";
						rank = "CORPORAL";
						side = 0;
						position[] = {-10,10,0};
					};
					name = "Commandement (2)";
					class Unit01 {
						vehicle = "O_officer_F";
						rank = "SERGEANT";
						side = 0;
						position[] = {0,0,0};
					};					
					class Unit02 {
						vehicle = "O_officer_F";
						rank = "CORPORAL";
						side = 0;
						position[] = {5,0,0};
					};					
				};
				class INF_CMDT4_01 {
					name = "Commandement + Escorte (4)";
					class Vechicule01 {
						vehicle = "RHS_UAZ_MSV_01";
						rank = "CORPORAL";
						side = 0;
						position[] = {-10,10,0};
					};
					class Unit01 {
						vehicle = "O_officer_F";
						rank = "SERGEANT";
						side = 0;
						position[] = {0,0,0};
					};					
					class Unit02 {
						vehicle = "O_soldier_M_F";
						rank = "CORPORAL";
						side = 0;
						position[] = {5,-5,0};
					};					
					class Unit03 {
						vehicle = "O_recon_F";
						rank = "CORPORAL";
						side = 0;
						position[]={-5,-5,0};
					};					
					class Unit04 {
						vehicle="O_recon_F";
						rank="CORPORAL";
						side=0;						
						position[]={0,-5,0};
					};
				};
				class INF_MKSM4_01 {
					name = "Marksman (4)";
					class Vechicule01 {
						vehicle = "RHS_UAZ_MSV_01";
						rank = "CORPORAL";
						side = 0;
						position[] = {-10,10,0};
					};
					class Unit01 {
						vehicle = "O_Soldier_SL_F";
						rank = "SERGEANT";
						side = 0;
						position[] = {0,0,0};
					};					
					class Unit02 {
						vehicle = "O_soldier_M_F";
						rank = "CORPORAL";
						side = 0;
						position[] = {0,-5,0};
					};					
					class Unit03 {
						vehicle = "O_soldier_M_F";
						rank = "CORPORAL";
						side = 0;
						position[]={5,-5,0};
					};					
					class Unit04 {
						vehicle="O_recon_F";
						rank="PRIVATE";
						side = 0;						
						position[]={-5,-5,0};
					};
				};
				class INF_SUPP4_01 {
					name = "Support (4)";
					class Vechicule01 {
						vehicle = "rhs_tigr_msv";
						rank = "CORPORAL";
						side = 0;
						position[] = {-10,10,0};
					};
					class Unit01 {
						vehicle = "O_officer_F";
						rank = "SERGEANT";
						side = 0;
						position[] = {0,0,0};
					};					
					class Unit02 {
						vehicle = "O_Soldier_AT_F";
						rank = "CORPORAL";
						side = 0;
						position[] = {0,-5,0};
					};					
					class Unit03 {
						vehicle = "O_Soldier_AR_F";
						rank = "CORPORAL";
						side = 0;
						position[]={5,-5,0};
					};					
					class Unit04 {
						vehicle="O_Soldier_F";
						rank="PRIVATE";
						side = 0;						
						position[]={-5,-5,0};
					};
				};	
				class INF_FSPE4_01 {
					name = "Forces Speciales (4)";
					class Vechicule01 {
						vehicle = "rhs_tigr_msv";
						rank = "CORPORAL";
						side = 0;
						position[] = {-10,10,0};
					};				
					class Unit01 {
						vehicle = "O_Soldier_SL_F";
						rank = "SERGEANT";
						side = 0;
						position[] = {0,0,0};
					};					
					class Unit02 {
						vehicle = "O_Soldier_AR_F";
						rank = "CORPORAL";
						side = 0;
						position[] = {-5,-5,0};
					};					
					class Unit03 {
						vehicle = "O_Soldier_LAT_F";
						rank = "CORPORAL";
						side = 0;
						position[] = {0,-5,0};
					};
					class Unit04 {
						vehicle = "O_soldier_M_F";
						rank = "CORPORAL";
						side = 0;
						position[] = {5,-5,0};
					};
				};
				class INF_CMBT5_01 {
					name = "Combat Traditionnel (2+5)";
					class Vechicule01 {
						vehicle = "rhs_btr80a_msv";
						rank = "CORPORAL";
						side = 0;
						position[] = {-10,10,0};
					};
					class Crew02 {
						vehicle = "O_diver_TL_F";
						rank = "CORPORAL";
						side = 0;
						position[] = {-15,10,0};
					};					
					class Crew03 {
						vehicle = "O_crew_F";
						rank = "CORPORAL";
						side = 0;
						position[] = {-15,5,0};
					};
					class Unit01 {
						vehicle = "O_Soldier_SL_F";
						rank = "SERGEANT";
						side = 0;
						position[] = {0,0,0};
					};					
					class Unit02 {
						vehicle = "O_Soldier_TL_F";
						rank = "CORPORAL";
						side = 0;
						position[] = {-5,-5,0};
					};					
					class Unit03 {
						vehicle = "O_medic_F";
						rank = "CORPORAL";
						side = 0;
						position[] = {-5,-10,0};
					};					
					class Unit04 {
						vehicle = "O_Soldier_AT_F";
						rank = "CORPORAL";
						side = 0;
						position[] = {5,-5,0};
					};												
					class Unit05 {
						vehicle = "O_support_GMG_F";
						rank = "CORPORAL";
						side = 0;
						position[] = {5,-10,0};
					};					
				};				
				class INF_CMBT7_01 {
					name = "Combat Traditionnel (2+7)";
					class Vechicule01 {
						vehicle = "rhs_btr80a_msv";
						rank = "CORPORAL";
						side = 0;
						position[] = {-10,10,0};
					};
					class Crew02 {
						vehicle = "O_diver_TL_F";
						rank = "CORPORAL";
						side = 0;
						position[] = {-15,10,0};
					};					
					class Crew03 {
						vehicle = "O_crew_F";
						rank = "CORPORAL";
						side = 0;
						position[] = {-15,5,0};
					};
					class Unit01 {
						vehicle = "O_Soldier_SL_F";
						rank = "SERGEANT";
						side = 0;
						position[] = {0,0,0};
					};					
					class Unit02 {
						vehicle = "O_Soldier_TL_F";
						rank = "CORPORAL";
						side = 0;
						position[] = {-5,-5,0};
					};					
					class Unit03 {
						vehicle = "O_medic_F";
						rank = "CORPORAL";
						side = 0;
						position[] = {0,-5,0};
					};					
					class Unit04 {
						vehicle = "O_Soldier_AT_F";
						rank = "CORPORAL";
						side = 0;
						position[] = {5,-5,0};
					};					
					class Unit05 {
						vehicle = "O_Soldier_GL_F";
						rank = "CORPORAL";
						side = 0;
						position[] = {-5,-10,0};
					};					
					class Unit06 {
						vehicle = "O_Soldier_A_F";
						rank = "CORPORAL";
						side = 0;
						position[] = {0,-10,0};
					};					
					class Unit07 {
						vehicle = "O_support_GMG_F";
						rank = "CORPORAL";
						side = 0;
						position[] = {5,-10,0};
					};
				};
				class INF_CMBT10_01 {
					name = "Combat Traditionnel (3+7)";
					class Vechicule01 {
						vehicle = "rhs_btr80a_msv";
						rank = "CORPORAL";
						side = 0;
						position[] = {-10,10,0};
					};
					class Crew02 {
						vehicle = "O_diver_TL_F";
						rank = "CORPORAL";
						side = 0;
						position[] = {-15,10,0};
					};					
					class Crew03 {
						vehicle = "O_crew_F";
						rank = "CORPORAL";
						side = 0;
						position[] = {-15,5,0};
					};
					class Crew04 {
						vehicle = "O_crew_F";
						rank = "CORPORAL";
						side = 0;
						position[] = {-15,0,0};
					};
					class Unit01 {
						vehicle = "O_Soldier_SL_F";
						rank = "SERGEANT";
						side = 0;
						position[] = {0,0,0};
					};					
					class Unit02 {
						vehicle = "O_Soldier_TL_F";
						rank = "CORPORAL";
						side = 0;
						position[] = {-5,-5,0};
					};					
					class Unit03 {
						vehicle = "O_medic_F";
						rank = "CORPORAL";
						side = 0;
						position[] = {0,-5,0};
					};					
					class Unit04 {
						vehicle = "O_Soldier_AT_F";
						rank = "CORPORAL";
						side = 0;
						position[] = {5,-5,0};
					};					
					class Unit05 {
						vehicle = "O_Soldier_GL_F";
						rank = "CORPORAL";
						side = 0;
						position[] = {-5,-10,0};
					};					
					class Unit06 {
						vehicle = "O_Soldier_A_F";
						rank = "CORPORAL";
						side = 0;
						position[] = {0,-10,0};
					};					
					class Unit07 {
						vehicle = "O_support_GMG_F";
						rank = "CORPORAL";
						side = 0;
						position[] = {5,-10,0};
					};
				};
			};
		};
	};
};  
